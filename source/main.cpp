//2 x 2の読み取り
#include "MicroBit.h"

#define TATE	2
#define YOKO	2

uint16_t board[TATE][YOKO]; //このプログラムでは読み取った値をそのまま入れるため0~1023の値が入る。
									 //uint8_tだと入り切らないためuint16_tを使う。実際は値を変換してuint8_tに収める。
MicroBit uBit;
MicroBitPin digitalOut[2] = {uBit.io.P6, uBit.io.P7}; //トランジスタのベースへ繋げるピンを配列に定義
MicroBitPin analogRead[2] = {uBit.io.P3, uBit.io.P0}; //読み取り用のピンを配列に定義

int main(){
	//読み取り準備
	uBit.init();
	uBit.display.disable(); //ディスプレイに使用しているピンを開放
	for(int i = 0; i < TATE; i++) digitalOut[i].setDigitalValue(0); //全てのトランジスタのベース電圧をLOWにする
	
	//ここから読み取り
	for(int i = 0; i < TATE; i++){
		digitalOut[i].setDigitalValue(1); //i行目のトランジスタのベース電圧をHIGHにする
		for(int j = 0; j < YOKO; j++) board[i][j] = analogRead[j].getAnalogValue(); //i行j列の読み取り
		////////////////
		//!!!!注意!!!!// ブロックを接続してないマスもきれいに0にはならずに2とか3の低い値を読み取るため、変換のときに一定の値以下は0にすること。
		////////////////
		digitalOut[i].setDigitalValue(0); //i行目のトランジスタのベース電圧をLOWにする
	}
	uBit.display.enable(); //ディスプレイに使い終わったピンを返してあげる

	//読み取った値の表示
	for(int i = 0; i < TATE; i++){
		for(int j = 0; j < YOKO; j++) uBit.display.scroll(board[i][j]);
	}
}
