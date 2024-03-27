#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    //srand(time(NULL));

    //const int ROW = 3;
    //const int COLUMN = 4;
    //const int ARRA = 12;

    //int array[ROW][COLUMN] = {};

    //int min, max;
    //cout << "Введите границы диапазона: ";
    //cin >> min >> max;

    /*int array2[ARRA];
    int max_num;
    int min_sum = 0;
    int sum_num = 0;
    int sum_num_temp;

    int temp;


    for (int k = 0; k < ROW; k++)
    {
        for (int c = 0; c < COLUMN; c++)
        {
            array[k][c] = min + rand() % (max - min + 1);
        }
    }*/
    // Первое задание

    /*for (int o = 0; o < ROW; o++)
        {
            sum_num_temp = 0;
            for (int k = 0; k < ROW; k++)
            {
                max_num = array[k][0];
                for (int c = 0; c < COLUMN; c++)
                {
                    sum_num_temp += array[k][c];
                }
            }
            sum_num = sum_num_temp;
            if (min_sum < sum_num) min_sum = sum_num;

        }
    cout << min_sum;*/


    // Второе задание

    /*
    int aa;
    cout << "Введите a: ";
    cin >> aa;
    cout << endl;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if (array[i][j] % 10 == aa) array2[i] = aa;
        }
    }

    cout << endl << "Результат: " << endl;
    for (int i = 0; i < ROW; i++)
    {
        cout << "В " << i + 1 << "й строке - " << array2[i] << " чисел, с окончанием на " << aa << "." << endl;
    }*/

    bool simmetrichniy;
    
    int n;
    cin >> n;
    int arr[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    simmetrichniy = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
                simmetrichniy = false;
        }
    }

    if (simmetrichniy)
        cout << "YES";
    else
        cout << "NO";
}