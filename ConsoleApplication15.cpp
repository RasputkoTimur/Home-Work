#include <iostream>
using namespace std;

void matriza(int size)
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
		cout << endl;
	}
	cout << endl;
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
		cout << endl;
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
				cout << endl;
				cout << " " << a[i][j] << " ";
				cout << endl;

			}
		}

	}

	cout << "Минимум = " << min << endl;
	cout << "Максимум = " << max << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int size;
	cout << "Введите размер: ";
	cin >> size;
	matriza(size);
}