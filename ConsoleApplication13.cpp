#include <iostream>
using namespace std;

int happy_num(unsigned int num)
{
    if (num < 1000000 || num > 99999)
    {
        return ((num / 100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10));
    }
}


int search(int array[], const int SIZE, int key)
{
    for (int i = 0;i < SIZE;i++)
        if (array[i] == key)
        {
            return i;
        }
}

int main()
{
    setlocale(LC_ALL, "rus");


    int a;
    cout << "Введите шестизначное число: ";
    cin >> a;
    if (happy_num(a) == 1) cout << "Да";
    else cout << "Нет";


    const int SIZE = 10;
    int array[SIZE] = { 5,12,4,135,5,13,5,8,5,123 };
    int key;
    cout << "Введите ключ";
    cin >> key;
    int ab = search(array, SIZE, key);
    if (ab != -1) cout << "Ключ найден в позиции:  " << ab;

    //Следующая строка выводит на экран сообщение
    //Значение не найдено

    else
        cout << "Ключ не найден";

}
