#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // Первое задание

    int i;
    int a;
    int sum = 0;
    cout << "Введите число меньше 500: ";
    cin >> a;
    if (a < 500){
        for (i = a; i <= 500; i++, a++)
        {
            sum = sum + a;
        }}
    else cout << "Ошиька";
    cout << sum;

    // Второе задание

    int x;
    int y;
    cin >> x;
    cin >> y;
    cout << pow(x, y);

    // Третье задание
    int a = 0;
    for (int i = 0; i <= 100; i++)
        a += i;

    cout << a / 100 << endl;

    // Четвёртое задание

    int a;
    int sum = 1;
    cout << "Введите число меньше 500: ";
    cin >> a;
    if (a >= 1 && a <=20) {
        for (i = a; i <= 500; i++, a++)
        {
            sum = sum * a;
        }
    }
    else cout << "Ошибка";
    cout << sum;

    // Пятое задание

    int k;
    cin >> k;
    for (int i = 1; i < k + 1;i++)
    {
        cout << k << " x " << i << " = " << k * i << ";" << endl;
    }
}
