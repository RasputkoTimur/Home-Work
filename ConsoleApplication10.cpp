#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    // Шейкерная сортировка

    /*int const MASS = 10;
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

    for (int i = 0; i < MASS - i; i++)
    {
        for (int j = 0; j < MASS - i - 1;j++)
        {
            if (massive[j] > massive[j + 1]) 
            {
                swap(massive[j], massive[j + 1]);
            }
        }
        for (int j = 0; j < MASS - i - 1;j++)
        {
            if (massive[j] < massive[j - 1])
            {
                swap(massive[j], massive[j - 1]);
            }
        }
    }

    for (int i = 0; i < MASS; i++)
    {
        cout << massive[i] << " ";
    } */

    // Сортировка подсчётом

    int const MASS = 10;
    int const MIN = 10; int const MAX = 100;
    int arr[MASS];
    srand(time(NULL));

    for (int i = 0; i < MASS; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN);
        cout << arr[i] << " ";
    }
    cout << endl;


    int n = sizeof(arr) / sizeof(arr[0]);

    int count[MAX + 1] = { 0 };

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= MAX; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[index++] = i;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    }