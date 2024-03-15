#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    int const MASS = 10;
    int a, b;
    cout << "Введите границы массива: ";
    cin >> a >> b;
    int massive[MASS];
    int min;
    int max;
    srand(time(NULL));

    for (int i = 0; i < MASS; i++)
    {
        massive[i] = a + rand() % (b - a);
        cout << massive[i] << " ";
    }
    cout << endl;
    bool flag;
    for (int j = 0; j < MASS; j++)
    {
        flag = true;
        for (int i = 0; i < MASS - 1 - j; i++)
        {
            if (massive[i] > massive[i+1])
            {
                swap(massive[i], massive[i + 1]);
                flag = false;
            }
        }
        if (flag) break;
    }
    for (int i = 0; i < MASS; i++)
    {
        cout << massive[i] << " ";
    }
}