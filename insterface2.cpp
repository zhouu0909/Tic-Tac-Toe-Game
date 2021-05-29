#include<iostream>
#include<string>
#include"Circlefork.h"
using namespace std;


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
	char key;
	int d, i = 1;

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
	d=player1.getindex();
	do {
		cout << "請選擇未選過的位置: ";
		cin >> key;

		if (d % 2 != 0) {

			player1.OX(key, L, 'O');
			lattice(L);
			d=player1.getindex();
			d=player1.winlose(L, 'O', player1.getName());
			
		}
		else {

			player1.OX(key, L, 'X');
			lattice(L);
			d = player1.getindex();
			d=player1.winlose(L, 'X', player2.getName());
		
		}
		
		
	} while (d != 10 &&d!=11);
	if (d == 10) {
		cout << "平手!!!";
	}
	

}
