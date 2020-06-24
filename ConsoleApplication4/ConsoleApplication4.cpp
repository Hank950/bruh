#include<iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int i, j;
	const int ROWS = 4;
	const int COLS = 9;
	int mas[ROWS][COLS];
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			mas[i][j] = rand() % 20;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << mas[i][j]<< " ";
		}
		cout << endl;
	}
	
	int max = mas[i][j];
	for (i=0; i<ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			cout << mas[i][j];
		}
	}

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			if (mas[i][j] > max) max = mas[i][j];
		}
	}

	cout << "max = " << max << endl;
	return 0;
}