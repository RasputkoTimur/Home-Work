#include <iostream>
using namespace std;
#include <string>

void copyArray(int firstArray[], int secondArray[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        secondArray[i] = firstArray[i];
    }
}

void paste(int element, int tut, int* arr, int size)
{
    int* buf = new int[size];
    for (int i = 0; i < tut; i++)
    {
        buf[i] = arr[i];
    }
    buf[tut] = element;
    for (int i = tut+1; i < size; i++)
    {
        buf[i] = arr[i-1];
    }
    delete[] arr;
    arr = buf;
}

void reverseArray(int array[], int size)
{
    int a = 0; int b = size - 1;
    while (a < b)
    {
        swap(array[a], array[b]); 
        a++; b--;                 
    }                             
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void delColumn(int del, int** doubleArray, int& rows, int& columns)
{
    int** buf = new int* [rows - 1];
    for (int i = 0; i < del; i++)
    {
        buf[i] = doubleArray[i];
    }
    for (int i = del+1; i < rows; i++)
    {
        buf[i - 1] = doubleArray[i];
    }

    delete[] doubleArray;
    doubleArray = buf;
    rows--;
}

int spaces(string eps)
{
    int index;
    int space = 0;
    while (true)
    {
        index = eps.find(" ");
        if (index == -1)
        {
            break;
        }
        else
        {
            space++;
            eps.erase(index,1);
        }
    }
    return space;
}

int findLastIndex(string text, string subText)
{
    return text.rfind(subText);
}

void removeMinRow(int** arr, int& rows, int columns) {
    int min_sum_row = 0;
    int min_sum = 0;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < columns; j++) {
            sum += arr[i][j];
        }
        if (sum < min_sum) {
            min_sum = sum;
            min_sum_row = i;
        }
    }
    for (int i = min_sum_row; i < rows - 1; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = arr[i + 1][j];
        }
    }
    rows--;
}

int main()
{
    setlocale(LC_ALL, "rus");

    // Первое задание
    // Пользователь вводит 5 чисел. Найти максимальное и минимальное из введённых чисел и вывести их на экран.

    /*const int SIZE = 5;
    double array[SIZE];

    double numl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Введите число: ";
        cin >> numl;
        array[i] = numl;
    }

    double minl = array[0];
    double maxl = array[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (minl > array[i])
        {
            minl = array[i];
        }
        if (maxl < array[i])
        {
            maxl = array[i];
        }
    }

    cout << "Наибольшее число: " << maxl << endl << "Наименьшее число: " << minl;*/

    // Второе задание
    // Вывести все нечетные числа в диапазоне от 1 до 50. Условие внутри цикла использовать нельзя!

    /*for (int i = 1; i < 50; i+=2)
    {
        cout << i << " ";
    }*/

    // Третье задание
    // Пользователь вводит сторону квадрата. Вывести прямоугольный треугольник с высотой, равной стороне квадрата, подобным образом:

    /*int squareSize;
    cout << "Введите сторону: ";
    cin >> squareSize;

    for (int i = 0; i < squareSize+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }*/

    // Четвёртое задание
    // Пользователь вводит число. Определить, является ли оно простым.

    /*int num;
    cout << "Введите число: ";
    cin >> num;
    bool Rule = true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            Rule = false;
        }
    }
    if (Rule)
    {
        cout << "Число простое";
    }
    else cout << "Число не простое";*/

    // Пятое задание
    // Создать одномерный статический массив, заполнить его числами Фибоначчи до заданного пользователем количества элементов

    /*cout << "Задайте границу массива: ";
    int size;
    cin >> size;

    int* arr = new int[size];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < size; i++)
    {
        arr[i] = arr[i-1] + arr[i - 2];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }*/

    // Шестое задание
    // Создать двумерный динамический массив. Заполнить его случайными числами. Определить номер столбца, сумма элементов которого наибольшая.

    /*srand(time(0));

    int rows;
    int columns;
    cout << "Введите кол-во rows: ";
    cin >> rows;
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

    int maxSum = 0;
    int sum;
    int index;
    
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum += doubleArray[j][i];
        }
        if (maxSum < sum)
        {
            maxSum = sum;
            index = i;
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

    cout << "Номер стобца с наибольшей суммой элементов: " << index;*/

    // Сельмое задание
    // Напишите функцию, принимающую два одинаковых по размеру двумерных массива. Первый массив проинициализировать случайными числами, второй оставить пустым. Функция должна полностью скопировать элементы второго массива в первый

    /*const int SIZE = 7;
    int firstArr[SIZE];
    int secondArr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        firstArr[i] = rand() % 10;
    }

    cout << "Первый массив: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << firstArr[i] << " ";
    }
    cout << endl << endl;

    copyArray(firstArr, secondArr, SIZE);
    
    cout << "Второй массив: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << secondArr[i] << " ";
    }*/

    // Восьмое задание
    // Напишите функцию, вставляющую элемент в указанную позицию одномерного динамического массива

    /*int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }

    int element;
    cout << "Введите число которое вставить: ";
    cin >> element;

    int tut;
    cout << "Куда вставить?: ";
    cin >> tut;

    paste(element, tut, arr, size);*/

    // Девятое задание
    // Перевернуть массив

    /*const int SIZE = 5;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 10;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
   
    cout << endl;

    reverseArray(arr, SIZE);*/

    // Десятое задание
    // Напишите функцию, удаляющую i-й столбец из двумерного динамического массива.

    /*int rows;
    int columns;
    cout << "Введите кол-во rows: ";
    cin >> rows;
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

    int del;
    cout << "Какой столбец удалить?: ";
    cin >> del;

    delColumn(del, doubleArray, rows, columns);*/

    // Одиннадцатое задание
    // Напишите функцию, удаляющую из двумерного динамического массива строку, сумма элементов которой минимальная

    /*removeMinRow()*/

    // Двенадцатое задание
    // Напишите функцию, которая возвращает индекс последнего вхождения подстроки в строку. При отсутствии возвращается -1.

    /*cout << findLastIndex("Love history histo ", "histo");*/

    // Тринадцатое задание
    // Напишите функцию, возвращающую количество слов в строке.

    /*cout << spaces("Арбуз съел два ананаса.");*/

}