#include<iostream>
#include<string>
#include"Circlefork.h"
using namespace std;

char L[8][8] = { {'~','~','~','~','~','~','~'},
				 {'|','1','|','2','|','3','|'},
				 {'~','~','~','~','~','~','~'},
				 {'|','4','|','5','|','6','|'},
				 {'~','~','~','~','~','~','~'},
				 {'|','7','|','8','|','9','|'},
				 {'~','~','~','~','~','~','~'} };
void lattice(char L[][8]) {
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << L[i][j];
		}
		cout << endl;
	}
	cout << endl;
}





int main() {
	char key ;
	int index = 1,i=3;

	char L[8][8] = { {'~','~','~','~','~','~','~'},
				 {'|','1','|','2','|','3','|'},
				 {'~','~','~','~','~','~','~'},
				 {'|','4','|','5','|','6','|'},
				 {'~','~','~','~','~','~','~'},
				 {'|','7','|','8','|','9','|'},
				 {'~','~','~','~','~','~','~'} };
	string codeName1, codeName2;
	cout << "Please key in first player's codename: ";
	cin >> codeName1;
	cout << endl;
	cout << "Please key in second player's codename: ";
	cin >> codeName2;
	cout << endl;
	Circlefork player1(codeName1);
	Circlefork player2(codeName2);
	lattice(L);
	do {
		cout << "請選擇未選過的位置: ";
		cin >> key;

			if (index % 2 != 0) {
			
				player1.OX(key, L, 'O');
				lattice(L);
				index++;
			}
			else {
			
				player1.OX(key, L, 'X');
				lattice(L);
				index++;

			}
	} 	while (i != 8);

	
}
