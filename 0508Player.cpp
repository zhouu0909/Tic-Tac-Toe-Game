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
	int x, y;
	x = ((Block - 1) / 3) * 2 + 1;
	y = ((Block - 1) % 3) * 2 + 1;

	if(B[x][y] != '0' )
	{
		cout << "此格已被填寫過了! 請換格!!!!";
	}
	else
	{
		B[x][y] = nSy;//填入玩家的代號
		re = true;
	}
	return re;
}
