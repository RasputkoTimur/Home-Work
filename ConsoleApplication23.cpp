#include <iostream>
using namespace std;


void showDoubleArray(int** array, int row, int col)
{

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void insertDoubleArrayByIndex(int** arr, int row, int col, int index, int* newArr)
{
    int** buf = new int* [row + 1];


    for (int i = 0; i < index; i++)
    {
        buf[i] = arr[i];
    }

    buf[index] = newArr;

    for (int i = index + 1; i < row + 1; i++)
    {
        buf[i] = arr[i - 1];
    }

    row += 1;

    delete[] arr;

    arr = buf;
}

void delDoubleArray(int** arr, int row, int col, int index)
{
    int** buf = new int* [row - 1];

    for (int i = index; i < row - 1; i++)
    {
        for (int j = 0; j < col; j++)
        {
            buf[i][j] = arr[i + 1][j];
        }
    }
    row--;

    delete[] arr;

    arr = buf;
}

void insertByIndexInDoubleArray(int** arr, int row, int col, int index, int value)
{
    int** buf = new int* [col + 1];

    /*for (int i = 0; i < index; i++)
    {
        buf[row][i] = arr[row][i];
    }*/

    for (int i = col - 1; i > index; i--)
    {
        buf[row][i] = arr[row][i - 1];
    }
    buf[row][index] = value;

    delete[] arr;

    arr = buf;
}

void deleteElementByIndexInRow(int** arr, int row, int col, int rowIndex, int index)
{    
    int** buf = new int* [col - 1];

    for (int i = index; i < col - 1; i++)
    {
        buf[rowIndex][i] = arr[rowIndex][i + 1];
    }

    delete[] arr;

    arr = buf;
}

void removeElement(int** arr, int row, int col, int value)
{
    int** buf = new int* [col - 1];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == value)
            {
                for (int k = j; k < col - 1; k++)
                {
                    buf[i][k] = arr[i][k + 1];
                }
                col--;

                delete[] arr;
                arr = buf;

                return;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
}