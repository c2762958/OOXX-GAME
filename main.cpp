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

	cout << "�w��Ө줫�r�C���A�H�U���ѳW�h" << endl;
	cout << "�бq������m��J�Ʀr1~9�A���⬰O�A��⬰X�C��J�Ʀr0���m�C���C"<<endl;
	cout << "��Ӫ��a�A�@�ӥ���(O)�A�@�ӥ��e�]X�^�A���y�b3��3����W���ۤv���Ÿ��A�̥��H��B���B�׳s���@�u�h���ӡC" << endl;
	cout << "�Y�C�����a���w�L�Ŧ�A�B�L�Ӫ̡A�h�o�M���A�C���N�۰ʭ��m�C" << endl;
	TicTacToe();    //to create a new chart
	OOXX playerO(1);
	playerO.ChooseCoordinateO();    //use input to change the number to "O" and to print the chart now we like

	
}