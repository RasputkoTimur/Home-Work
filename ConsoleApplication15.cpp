#include <iostream>
using namespace std;

void main()
{
	srand(time(0));
	int max = 0, min = 0;
	const int raw = 10, col = 10;
	int a[raw][col];
	for (int i = 0; i < raw; i++)
	{
		for (int j = 0; j < col; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	for (int k = 0; k < raw; k++)
	{
		for (int i = 0; i < col; i++)
		{
			for (int j = raw - 1; j > i; j--)
				if (a[k][j] < a[k][j - 1])
				{
					int tmp = a[k][j];
					a[k][j] = a[k][j - 1];
					a[k][j - 1] = tmp;

				}
			cout << a[k][i] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < raw; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == j)
			{

				min = a[0][0];
				max = a[0][0];
				if (a[i][j] < min) min = a[i][j];
				if (a[i][j] > max) max = a[i][j];
				cout << " \n";
				cout << " " << a[i][j] << " ";
				cout << "\n";

			}
		}

	}

	cout << "Min = " << min << endl;
	cout << "Max = " << max << endl;

}