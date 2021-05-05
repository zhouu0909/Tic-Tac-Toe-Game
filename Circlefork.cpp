#include "Circlefork.h"
#include<iostream>
#include<string>
using namespace std;

Circlefork::Circlefork(string nm) {
	name = nm;
}
void Circlefork:: OX(  char key,char cf[][8],char ox) {
	
	switch (key) {
		
	case '1':
		cf[1][1] = ox;
		break;
	case '2':
		cf[1][3] = ox;
		break;
	case '3':
		cf[1][5] = ox;
		break;
	case '4':
		cf[3][1] = ox;
		break;
	case '5':
		cf[3][3] = ox;
		break;
	case '6':
		cf[3][5] = ox;
		break;
	case '7':
		cf[5][1] = ox;
		break;
	case '8':
		cf[5][3] = ox;
		break;
	case '9':
		cf[5][5] = ox;
		break;
	default:
			break;
	}
	

}
