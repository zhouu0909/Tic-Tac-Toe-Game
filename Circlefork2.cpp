#include "Circlefork.h"
#include<iostream>
#include<string>
using namespace std;
int  Circlefork::index = 1;

Circlefork::Circlefork(string nm) {
	name = nm;
}
int Circlefork::OX(char key, char cf[][8], char ox ) {

	switch (key) {

	case '1':
		if (cf[1][1] != '1') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}
			

		else {
			cf[1][1] = ox;
			return index++;
		}
		break;
	case '2':
		if(cf[1][3] != '2') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}


		else {
		cf[1][3] = ox;
		return index++;
		}
		break;
	case '3':
		if (cf[1][5] != '3') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}


		else {
			cf[1][5] = ox;
			return index++;
		}
		break;
	case '4':
		if (cf[3][1] != '4') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}


		else {
			cf[3][1] = ox;
			return index++;
		}
		break;
	case '5':
		if (cf[3][3] != '5') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}


		else {
			cf[3][3] = ox;
			return index++;
		}
		break;
	case '6':
		if (cf[3][5] != '6') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}


		else {
			cf[3][5] = ox;
			return index++;
		}
		break;
	case '7':
		if (cf[5][1] !='7') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}


		else {
			cf[5][1] = ox;
			return index++;
		}
		break;
	case '8':
		if (cf[5][3] != '8') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}


		else {
			cf[5][3] = ox;
			return index++;
		}
		break;
	case '9':
		if (cf[5][5] != '9') {
			cout << "選過了啦白癡!!" << endl;
			return index-2;
		}


		else {
			cf[5][5] = ox;
			return index++;
		}
		break;
	default:
		break;
	}

}

int Circlefork::getindex() {
	return index;
}
string Circlefork::getName() {
	return name;
}
int  Circlefork::winlose(char cf[][8],char z,string n) {
	if (cf[1][1] == z && cf[1][3] == z && cf[1][5] == z) {
		cout << n << " win!!";
		return 11;
	}
	else if (cf[3][1] == z && cf[3][3] == z && cf[3][5] == z) {
		cout << n << " win!!";
		return 11;
	}
	else if (cf[5][1] == z && cf[5][3] == z && cf[5][5] == z) {
		cout << n << " win!!";
		return 11;
	}
	else if (cf[1][1] == z && cf[3][1] == z && cf[5][1] == z) {
		cout << n << " win!!";
		return 11;
	}
	else if (cf[1][3] == z && cf[3][3] == z && cf[5][3] == z) {
		cout << n << " win!!";
		return 11;
	}
	else if (cf[1][5] == z && cf[3][5] == z && cf[5][5] == z) {
		cout << n << " win!!";
		return 11;
	}
	else if (cf[1][1] == z && cf[3][3] == z && cf[5][5] == z) {
		cout << n << " win!!";
		return 11;
	}
	else if (cf[1][5] == z && cf[3][3] == z && cf[5][1] == z) {
		cout << n << " win!!";
		return 11;
	}
	else {
		return getindex();
	}

}
