#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "rus");
    cout << "Введите ращмер массива: ";
    int size;
    cin >> size;
    int* array = new int[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    const int MASS = 4;
    int arr[MASS] = { 1,5,8,7 };
    /*int* buf = new int[size+MASS];*/
    /*
    for (int i = 0; i < size; i++)
    {
        buf[i] = array[i];
    }
    for (int i = 0; i < MASS; i++)
    {
        buf[size+i] = arr[i];
    }

    size+=MASS;

    delete[] array;

    array = buf;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    */

    /*int temp;
    cout << "Куда вставить массив";
    cin >> temp;



    for (int i = 0; i < temp; i++)
    {
        buf[i] = array[i];
    }

    for (int i = temp; i < temp+MASS; i++)
    {
        buf[i] = arr[i-temp];
    }

    for (int i = temp+MASS; i < MASS+size; i++)
    {
        buf[i] = array[i-MASS];
    }

    size += MASS;

    delete[] array;

    array = buf;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }*/

    int* buf = new int[size - 1];

    int temp;
    cout << "Какое значение удалить";
    cin >> temp;

    int temp2 = -1;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == temp)
        {
            temp2 = i;
            break;
        }

    }
    if (temp2 != -1);
    else {
        cout << "ОШИБКА"; return -1;
    }

    for (int i = 0; i < temp2; i++)
    {
        buf[i] = array[i];
    }

    for (int i = temp2; i < size - 1; i++)
    {
        buf[i] = array[i + 1];
    }


    size--;

    delete[] array;

    array = buf;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

}
