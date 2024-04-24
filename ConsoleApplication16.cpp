#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Адрес массива: " << arr << endl;

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}