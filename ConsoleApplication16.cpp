#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    // Создаем динамический массив
    int* arr = new int[size];

    cout << "Адрес массива: " << arr << endl;
}