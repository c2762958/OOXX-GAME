#include <iostream>
#include<string>
using namespace std;


void TicTacToe(string list[])
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
				cout << list[set];
				set++;
			}
		}
		cout << endl;
	}
}

	int main()
	{
		string x[9] = { "1","2","3","4","5","6","7","8","9" };
		int coordinate;
		TicTacToe(x);
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
						x[coordinate - 1] = "X";
						break;
					}
				}
			TicTacToe(x);
		}
		
	}
