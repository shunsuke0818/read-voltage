//実サイズ
#include "MicroBit.h"

#define TATE				9
#define YOKO				7
#define ID_READ_BUTTON	10 //読み取りボタンインスタンスのID
#define MUX_READ			4 //マルチプレクサで拡張するピンの数

uint16_t board[TATE][YOKO];
MicroBit uBit;
MicroBitButton readButton(MICROBIT_PIN_P19, ID_READ_BUTTON, MICROBIT_BUTTON_ALL_EVENTS, PullUp);

//読み取りルーチン
void read(){
	static MicroBitPin digitalOut[YOKO] = {uBit.io.P5, uBit.io.P6, uBit.io.P7, uBit.io.P8, uBit.io.P9, uBit.io.P11, uBit.io.P13};
	static MicroBitPin analogRead[TATE - MUX_READ] = {uBit.io.P3, uBit.io.P0, uBit.io.P4, uBit.io.P1, uBit.io.P10};
	static MicroBitPin muxControl[3] = {uBit.io.P14, uBit.io.P15, uBit.io.P16}; //マルチプレクサ操作用ピン
	static MicroBitPin muxRead = uBit.io.P2; //マルチプレクサで読み取るピン

	for(int i = 0; i < YOKO; i++) digitalOut[i].setDigitalValue(0);
	
	//ここから読み取り
	for(int i = 0; i < YOKO; i++){
		digitalOut[i].setDigitalValue(1);
		for(int j = 0; j < TATE - MUX_READ; j++) board[j][i] = analogRead[j].getAnalogValue();
		//これ以降はマルチプレクサで読み取る
		for(int j = 0; j < MUX_READ; j++){
			for(int k = 0; k < 3; k++) muxControl[k].setDigitalValue((j >> k) & 1);
			board[j + MUX_READ + 1][i] = muxRead.getAnalogValue();
		}
		digitalOut[i].setDigitalValue(0);
	}
}

//読み取りボタン押されたら実行
void OnButton(MicroBitEvent){
	uBit.display.disable();
	read();
	//uBit.display.enable();
	//値を表示(デバッグ用)
	for(int i = 0; i < TATE; i++){
		for(int j = 0; j < YOKO; j++){
			if(board[i][j] < 10){
				uBit.serial.send("     ");
			}else if(board[i][j] < 100){
				uBit.serial.send("    ");
			}else if(board[i][j] < 1000){
				uBit.serial.send("   ");
			}else{
				uBit.serial.send("  ");
			}
			uBit.serial.send(board[i][j]);
		}
		uBit.serial.send("\r\n\r\n");
	}
	uBit.serial.send("-----------------------------------------------------");
	uBit.serial.send("\r\n\r\n");
}


int main(){
	uBit.init();
	uBit.messageBus.listen(ID_READ_BUTTON, MICROBIT_BUTTON_EVT_CLICK, OnButton, MESSAGE_BUS_LISTENER_DROP_IF_BUSY);

	while(true){
		uBit.sleep(1000);
	}
}
