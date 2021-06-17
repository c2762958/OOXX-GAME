#ifndef TicTac_h
#define TicTac_h
#include <string>
#include<iostream>

using namespace std;

class TicTac
{
public:
	TicTac();
	TicTac(string);
	void Restart(string);
	string player1Input();
	string player2Input();
	string getContent();
	void setContent(string);

private:
	string content;
	int where;
};


#endif

