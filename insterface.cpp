#include<iostream>
#include<string>
using namespace std;
int board[10] = {};
void lattice() {
	char L[8][8] = { {'~','~','~','~','~','~','~'},
				 {'|',' ','|',' ','|',' ','|'},
				 {'~','~','~','~','~','~','~'},
				 {'|',' ','|',' ','|',' ','|'},
				 {'~','~','~','~','~','~','~'},
				 {'|',' ','|',' ','|',' ','|'},
				 {'~','~','~','~','~','~','~'} };

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << L[i][j];
		}
		cout << endl;
	}
}
void printBoard() {
	cout << "~~~~~~" << endl;
	for (int i = 1; i < 10; i++)
	{
		if (board[i] == 1)
		{
			cout << "|X";
		}
		else if (board[i] == 2)
		{
			cout << "|O";
		}
		else
		{
			cout << "|" << i;
		}
		if (i % 3 == 0)
		{
			cout << "|\n";
			cout << "~~~~~~\n";
		}
	}
}

void play(int player, int& i) {
	printBoard();
	cout << "Player=" << i << endl;
	do {
		do {
			cout << "請說出要下的位置: ";
			cout << &i;
		} 		while (i < 1 || i > 9);
	} 	while (board[i] != 0);
	board[i] = player;
}

int main() {
	string codeName1, codeName2;
	cout << "Please key in first player's codename: ";
	cin >> codeName1;
	cout << endl;
	cout << "Please key in second player's codename: ";
	cin >> codeName2;
	cout << endl;
	printBoard();
	cout << endl;
	lattice();
	
}
