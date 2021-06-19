#include <iostream>
#include<string>
#include"OOXX.h"
using namespace std;

void TicTacToe()//create first chart for game
{
	string list[9] = { "1","2","3" ,"4" ,"5" ,"6" ,"7" ,"8" ,"9" };
	int set = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((i == 0 || i == 2 || i == 4) && (j == 1 || j == 3))
				cout << "|";

			if ((i == 1 || i == 3) && (j == 0 || j == 2 || j == 4))
				cout << "-";

			if ((i == 1 || i == 3) && (j == 1 || j == 3))
				cout << "+";

			if ((i == 0 || i == 2 || i == 4) && (j == 0 || j == 2 || j == 4))
			{
				cout << list[set];
				set++;
			}
		}
		cout << endl;
	}
}

int main()
{
	//1.create a chart of OOXX
	//2.create player1 and input int for chart
	//3.if the game havent done tune to player2
	//4.create player2 and input int for chart
	//5.if the game havent done tune to player1
	//6.keep loop until game set

	cout << "歡迎來到井字遊戲，以下講解規則" << endl;
	cout << "請從對應位置輸入數字1~9，先手為O，後手為X。輸入數字0重置遊戲。"<<endl;
	cout << "兩個玩家，一個打圈(O)，一個打叉（X），輪流在3乘3的格上打自己的符號，最先以橫、直、斜連成一線則為勝。" << endl;
	cout << "若遊戲場地內已無空位，且無勝者，則得和局，遊戲將自動重置。" << endl;
	TicTacToe();    //to create a new chart
	OOXX playerO(1);
	playerO.ChooseCoordinateO();    //use input to change the number to "O" and to print the chart now we like

	
}