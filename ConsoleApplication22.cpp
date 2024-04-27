#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    cout << "Введите размер массива(raw): ";
    int raw;
    cin >> raw;

    cout << "Введите размер массива(col): ";
    int col;
    cin >> col;

    int** array = new int* [raw];
    for (int i = 0; i < raw; i++)
    {
        array[i] = new int[col];
    }

    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    //int temp;
    //cout << "Введите число которое желаете вставить: ";

    int** buf = new int* [raw + 1];
    for (int i = 0; i < raw; i++)
    {
        buf[i] = array[i];
    }

    buf[raw] = new int[col];  

    for (int j = 0; j < col; j++) {     
        buf[raw][j] = rand() % 10;
    }

    ++raw;
    delete array;

    array = buf;
    for (int i = 0; i < raw; i++) 
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }



}