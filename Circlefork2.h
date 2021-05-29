#ifndef Circlefork_h
#define Circlefork_h
#include<string>
#include<iostream>
using namespace std;

class Circlefork
{
public:
	Circlefork(string);
	int OX(char, char[][8], char);
	int getindex();
	int winlose(char[][8],char,string );
	string getName();


private:
	string name;
	static int index;

};
#endif
