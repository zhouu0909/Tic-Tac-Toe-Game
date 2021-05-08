#include<iostream>
#include<string>
#include<iomanip>
#include"Player.h"
#include<cstdlib> //清除頁面
#include<windows.h> //暫停幾秒
using namespace std;

void Start() {     //遊戲開始介面
	cout << "Welcome to Tic Tac Toe Game!!";
	Sleep(1200);
	system("cls");
}
char Board[8][8];
void MakeBoard() //初始化
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (i % 2 != 0 && j % 2 != 0)
				Board[i][j] = '0';
			else
				Board[i][j] = '*';
		}		
	}
}//定義九宮格*/
void ShowBoard(char Board[][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++) {
			cout << Board[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
	
int main() {
	MakeBoard();
	Start(); //呼叫開始介面
	string player1, player2;
	char C1, C2;
	cout << "Please enter the player1's name and char: ";
	cin >> player1>>C1;
	cout << "Please enter the player2's name and char: ";
	cin >> player2>>C2;
	system("cls");
	cout << "!!!!!Game Start!!!!!";
	Sleep(1200);
	system("cls");

	ShowBoard(Board);
	Player P1(player1, C1), P2(player2, C2);
	int B; //要填入的格子
	
	for (int i = 1; i < 10; ) {
		cout << "請輸入要填入的數字: ";
		cin >> B;
		if (i % 2 != 0) {
			if (P1.setSymbol(Board, C1, B) == true)
				i++;
		}
		else {
			if (P2.setSymbol(Board, C2, B) == true)
				i++;
		}
		ShowBoard(Board);
	}
}
