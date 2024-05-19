#include<iostream>
using namespace std;
int main()
{
	const int row = 3, col = 7;
	int food[row][col];
	float sum, lowest, highest, average;
	sum = 0;
	cout << "enter the food for each monkey during the week\n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> food[i][j];
		}
	}
	lowest = food[0][0];
	highest = food[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum = sum + food[i][j];
		}
	}
	cout << sum << endl;
	average = sum / 21.0;
	cout << "the average is " << average << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			if (food[i][j] < lowest)
			{
				lowest = food[i][j];
			}
			if (food[i][j] > highest)
			{
				highest = food[i][j];
			}
		}
	}
	cout << "the lowest value is " << lowest << endl;
	cout << "the highest value is " << highest;
	return 0;
}

