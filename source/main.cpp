//実サイズ
#include "MicroBit.h"

#define TATE		9
#define YOKO		7
#define MUX_READ	4 //マルチプレクサで拡張するピンの数

uint16_t board[TATE][YOKO];
MicroBit uBit;

//言わずと知れたbitRead()
bool BitRead(uint8_t n, uint8_t d){
	n >>= d;
	return n & 1;
}

//マルチプレクサで参照するピンを任意にセットする
void MuxSet(uint8_t n){
	static MicroBitPin muxControl[3] = {uBit.io.P14, uBit.io.P15, uBit.io.P16}; //マルチプレクサ操作用ピン
	for(int i = 0; i < 3; i++) muxControl[i].setDigitalValue(BitRead(n, i));
}


int main(){
	MicroBitPin digitalOut[YOKO] = {uBit.io.P5, uBit.io.P6, uBit.io.P7, uBit.io.P8, uBit.io.P9, uBit.io.P11, uBit.io.P13};
	MicroBitPin analogRead[TATE - MUX_READ] = {uBit.io.P3, uBit.io.P0, uBit.io.P4, uBit.io.P1, uBit.io.P10};
	MicroBitPin muxRead = uBit.io.P2; //マルチプレクサで読み取るピン

	uBit.init();
	uBit.display.disable();
	for(int i = 0; i < YOKO; i++) digitalOut[i].setDigitalValue(0);
	
	//ここから読み取り
	for(int i = 0; i < YOKO; i++){
		digitalOut[i].setDigitalValue(1);
		for(int j = 0; j < TATE - MUX_READ; j++) board[j][i] = analogRead[j].getAnalogValue();
		//これ以降はマルチプレクサで読み取る
		for(int j = TATE - MUX_READ; j < TATE; j++){
			MuxSet(j - MUX_READ - 1);
			board[j][i] = muxRead.getAnalogValue();
		}
		digitalOut[i].setDigitalValue(0);
	}
	uBit.display.enable();
}
