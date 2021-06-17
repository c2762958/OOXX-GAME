#include <iostream>
#include<string>
#include "TicTac.h"
using namespace std;


void TicTacToe(TicTac list[])
{
	int set = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if ((i == 0 || i == 2 || i == 4) && (j == 1 || j == 3))
				cout << "|";

			if ((i == 1 || i == 3) && (j == 0 || j == 2 || j == 4))
				cout << "-";

			if ((i == 1 || i == 3) && (j == 1 || j == 3))
				cout << "+";

			if ((i == 0 || i == 2 || i == 4) && (j == 0 || j == 2 || j == 4))
			{
				cout<<list[set].getContent();
				set++;
			}
		}
		cout << endl;
	}
}

	int main()
	{
		TicTac tic1[9];
		cout << "start:" << endl << endl;
		for (int i = 0;i < 9;i++)
		{
			tic1[i].Restart(to_string(i + 1));
		}
		TicTacToe(tic1);

		int round = 1;
		int coordinate;

		while (true)
		{
			while (true)
			{
				cin >> coordinate;
				if (coordinate >= 10 || coordinate <= 0)
				{
					cout << "沒有此位置" << endl;
				}

				else
				{
					if (round % 2 == 1)
						tic1[coordinate-1].player1Input();
					else
						tic1[coordinate-1].player2Input();
					round++;
					break;
				}
			}

			TicTacToe(tic1);
		}
	}
