#ifndef Player_h
#define Player_h
#include<string>
using namespace std;
class Player {
public:
	Player();
	Player(string , char);
	bool setSymbol(char [][8], char,int); //表格，符號，要填的格子
	char getSymbol();
	void print(string [][8]);
private:
	string Name;
	char Symbol;

};
#endif // !Player_h
