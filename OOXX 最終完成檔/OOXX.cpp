#include "OOXX.h"
#include<iostream>
using namespace std;
OOXX::OOXX(){}
OOXX::OOXX(int _PlayerInput)
{
	PlayerInput = _PlayerInput;
}
void OOXX::GameChart()
{
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
				cout << ChartNumber[set];
				set++;
			}
		}
		cout << endl;
	}

}
void OOXX::ChooseCoordinateO()
{
	while (true)
	{
		while (true)
		{
			cin >> PlayerInput;
			cout << "--------------" << endl;
			if (PlayerInput == 0)
			{
				cout << "The chart has been restarted!" << endl << "--------------" << endl;
				ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
				round = 1;
				break;
			}
			if (PlayerInput >= 10 || PlayerInput <= 0)
			{
				cout << "�S������m�A���s��J:" << endl;
			}
			else if(ChartNumber[PlayerInput-1]=="O" || ChartNumber[PlayerInput-1] == "X")
			{
				cout << "����m�w�Q��J�A���s��J:" << endl;
			}
			else if(round%2==1)
			{
				ChartNumber[PlayerInput - 1] = "O";
				round++;
				break;
			}
			else if (round % 2 != 1)
			{
				ChartNumber[PlayerInput - 1] = "X";
				round++;
				break;
			}
		}
		GameChart();
		cout << "--------------" << endl;
		Victory();
	}
}
void OOXX::Victory()
{
	/*
	1: 123 147 159
	2: 258
	3: 357 369
	4: 456
	7: 789
	*/
	if (ChartNumber[0] ==  ChartNumber[1] and ChartNumber[1] == ChartNumber[2]) //123
	{
		if (round % 2 == 0)
		{
			cout << "O is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		else if (round % 2 == 1)
		{
			cout << "X is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
	}
	if (ChartNumber[0] == ChartNumber[3] and ChartNumber[3] == ChartNumber[6]) //147
	{
		if (round % 2 == 0)
		{
			cout << "O is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		else if (round % 2 == 1)
		{
			cout << "X is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
	}
	if (ChartNumber[0] == ChartNumber[4] and ChartNumber[4] == ChartNumber[8]) //159
	{
		if (round % 2 == 0)
		{
			cout << "O is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		else if (round % 2 == 1)
		{
			cout << "X is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
	}
	if (ChartNumber[1] == ChartNumber[4] and ChartNumber[4] == ChartNumber[7]) //258
	{
		if (round % 2 == 0)
		{
			cout << "O is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		else if (round % 2 == 1)
		{
			cout << "X is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
	}
	if (ChartNumber[2] == ChartNumber[4] and ChartNumber[4] == ChartNumber[6]) //357
	{
		if (round % 2 == 0)
		{
			cout << "O is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		else if (round % 2 == 1)
		{
			cout << "X is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
	}
	if (ChartNumber[2] == ChartNumber[5] and ChartNumber[5] == ChartNumber[8]) //369
	{
		if (round % 2 == 0)
		{
			cout << "O is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		else if (round % 2 == 1)
		{
			cout << "X is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
	}
	if (ChartNumber[3] == ChartNumber[4] and ChartNumber[4] == ChartNumber[5]) //456
	{
		if (round % 2 == 0)
		{
			cout << "O is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		else if (round % 2 == 1)
		{
			cout << "X is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
	}
	if (ChartNumber[6] == ChartNumber[7] and ChartNumber[7] == ChartNumber[8]) //789
	{
		if (round % 2 == 0)
		{
			cout << "O is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		else if (round % 2 == 1)
		{
			cout << "X is winner! Chart has been restarted!" << endl << "--------------" << endl;
			ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
			round = 1;
		}
		
	}
	if (round == 10)
	{
		cout << "Draw! No one get win! Chart has been restarted!" << endl << "--------------" << endl;
		ChartNumber[0] = "1"; ChartNumber[1] = "2"; ChartNumber[2] = "3"; ChartNumber[3] = "4"; ChartNumber[4] = "5"; ChartNumber[5] = "6"; ChartNumber[6] = "7"; ChartNumber[7] = "8"; ChartNumber[8] = "9";
		round = 1;
	}
}