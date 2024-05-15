#include <iostream>
using namespace std;

void quickSort(int* array, int left, int right)
{
    //int curIndex = left - 1;
    if (left > right) return;
    int marker = left - 1;
    for (int curIndex = left; curIndex <= right; curIndex++)
    {
        if (array[curIndex] <= array[right])
        {
            marker++;
            if (curIndex > marker)
            {
                swap(array[curIndex], array[marker]);
            }
        }
    }
    quickSort(array, left, marker - 1);
    quickSort(array, marker - 1, right);
}

int main()
{
    setlocale(LC_ALL, "rus");
}

