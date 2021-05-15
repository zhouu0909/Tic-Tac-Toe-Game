#include"Player.h"
#include<iostream>
using namespace std;
Player::Player() {

}
Player::Player(string nN,char nSy) {
	Name = nN;
	Symbol = nSy;
}
bool Player::setSymbol(char B[][8],char nSy,int Block) {
	bool re = false;
	switch (Block) { //找格子
	case 1:
		if (B[1][1] != '1') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[1][1] = nSy;//填入玩家的代號
			re = true;
		}
		break;
	case 2:
		if (B[1][3] != '2') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[1][3] = nSy;
			re = true;
		}
		break;
	case 3:
		if (B[1][5] != '3') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[1][5] = nSy;
			re = true;
		}
		break;
	case 4:
		if (B[3][1] != '4') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[3][1] = nSy;
			re = true;
		}
		break;
	case 5:
		if (B[3][3] != '5') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[3][3] = nSy;
			re = true;
		}
		break;
	case 6:
		if (B[3][5] != '6') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[3][5] = nSy;
			re = true;
		}
		break;
	case 7:
		if (B[5][1] != '7') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[5][1] = nSy;
			re = true;
		}
		break;
	case 8:
		if (B[5][3] != '8') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[5][3] = nSy;
			re = true;
		}
		break;
	case 9:
		if (B[5][5] != '9') {
			cout << "此格已被填寫過了! 請換格!!!!";
		}
		else
		{
			B[5][5] = nSy;
			re = true;
		}
		break;

	default:
		break;

	}
	return re;
}
