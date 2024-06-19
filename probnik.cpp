#include <iostream>
#include <string>
using namespace std;

//void copyDoubleArray(int* arr1[], int* arr2[], int& rows, int& columns)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < columns; j++)
//        {
//            arr2[i][j] = arr1[i][j];
//        }
//    }
//}
//
//void pasteInArray(int* arr, int where, int what, int size)
//{
//    if (where > size)
//    {
//        cout << "Ошибка.";
//    }
//    else arr[where] = what;
//}

void reverseArray(int* array, int size)
{
    int a = 0; int b = size - 1;
    while (a < b)
    {
        swap(array[a], array[b]); // 6 1 4 3 5
        a++; b--;                 // a = 1
    }                             // b = 4
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "rus");

    // Задание 1

    /*const int SIZE = 5;
    double num;
    double numArray[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Введите число: ";
        cin >> num;
        numArray[i] = num;
    }
    double min = numArray[0];
    double max = numArray[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (min > numArray[i])
        {
            min = numArray[i];
        }
        if (max < numArray[i])
        {
            max = numArray[i];
        }
    }

    cout << endl << "Максимальное число: " << max << endl << "Минимально число: " << min;


    cout << endl;*/
    // Второе задание

    /*cout << "Все нечётные числа от 1 до 50: " << endl;

    for (int i = 1; i < 51; i+=2)
    {
        cout << i << " ";
    }

    cout << endl;
    // Третье задание

    int squareSize;
    cout << "Введите размер квадрата: ";
    cin >> squareSize;
    for (int i = 2; i < squareSize+2; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;*/
    // Четвёртое задание

    /*int simpleNum;
    bool simpleNumRule = true;
    cout << "Введите число: ";
    cin >> simpleNum;
    for (int i = 2; i < simpleNum; i++)
    {
        if (simpleNum % i == 0)
        {
            simpleNumRule = false; break;
        }
    }
    if (simpleNumRule)
    {
        cout << "Число простое.";
    }
    else cout << "Число не простое.";

    cout << endl;*/
    // Пятое задание

    /*int maxsize;
    cout << "Введите размер массива: ";
    cin >> maxsize;

    int* arr = new int[maxsize];

    arr[0] = 0;
    arr[1] = 1;


    for (int i = 2; i < maxsize; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (int i = 0; i < maxsize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;*/
    // Шестое задание

    /*srand(time(0));

    int rows;
    cout << "Введите кол-во rows: ";
    cin >> rows;
    int columns;
    cout << "Введите кол-во columns: ";
    cin >> columns;

    int** doubleArray = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        doubleArray[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            doubleArray[i][j] = rand()%10;
        }
    }

    int sumArray = 0;
    int maxArray = 0;
    int indexRows;

    for (int i = 0; i < rows; i++)
    {
        sumArray = 0;
        for (int j = 0; j < columns; j++)
        {
            sumArray += doubleArray[j][i];
        }
        if (maxArray < sumArray)
        {
            maxArray = sumArray;
            indexRows = i;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << doubleArray[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Номер стобца с наибольшей суммой элементов: " << indexRows;

    cout << endl;*/
    // Седьмое задание

    /*int rows;
    cout << "Введите кол-во rows: ";
    cin >> rows;
    int columns;
    cout << "Введите кол-во columns: ";
    cin >> columns;

    int** doubleArray = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        doubleArray[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            doubleArray[i][j] = rand() % 10;
        }
    }

    int** secondDoubleArray = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        secondDoubleArray[i] = new int[columns];
    }
    
    copyDoubleArray(doubleArray, secondDoubleArray, rows, columns);

    cout << endl;*/
    // Восьмое задание

    /*int size;
    cout << "Введите размер массив: ";
    cin >> size;
    int* array = new int[size];

    int whatPaste;
    cout << "Какое число вставить?: ";
    cin >> whatPaste;

    int wherePaste;
    cout << "Куда это число вставить?: ";
    cin >> wherePaste;

    cout << endl;*/
    // Девятое задание

    /*int size;
    cout << "Введите размер массива: ";
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

    reverseArray(array, size);

    cout << endl;*/
    // Десятое задание

    
    cout << endl;
    // Одиннадцатое задание

    
    
    cout << endl;
    // Двенадцатое задание



    cout << endl;
    // Тринадцатое задание

    string str = "Арбуз пять конь сальто Азия";

    int space;
    space = str.find_first_of(" ");

    int countOfWorld;

    for (bool Flag = true; Flag!= true; Flag = true)
    {
        space = str.find_first_of(" ");
        if (true)
        {

        }
        countOfWorld += 1;
    }
}
