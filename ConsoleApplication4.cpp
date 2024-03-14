#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    // Первое задание
    int x;
    cout << "Введите число: ";
    cin >> x;
    if (x > 99999 && x < 1000000) {
        if (x / 100000 + x / 10000 % 10 + x / 1000 % 10 == x / 100 % 10 + x / 10 % 10 + x % 10)
            cout << "счастливый";
        else cout << "не счастливый";
    }
    else {
        cout << "ошибка";
    }
    // Второе задание
    int a, b, c, d;
    int newnum;
    int temp;
    int num,
    cout << "Введите четырехзначное число: " << endl;
    cin >> num;
    if (num / 1000 < 1) cout << "Ошиька!";
    else if (num / 1000 > 9) cout << "Ошибка!";
    else
    {
        d = num % 10;
        temp = num / 10;
        c = temp % 10;
        temp = temp / 10;
        b = temp % 10;
        a = temp / 10;
    }
    newnum = d2 * 1000 + d1 * 100 + d4 *
        10 + d3;
    cout << newnum;
    // Третье задание
    cout << "Home task #4.1.3\n\n";
    int a, b, c, d, e, f, g, h;
    cout << "Введите число: ";
    cin >> a;
    cout << "Введите число: ";
    cin >> b;
    cout << "Введите число: ";
    cin >> c;
    cout << "Введите число: ";
    cin >> d;
    cout << "Введите число: ";
    cin >> e;
    cout << "Введите число: ";
    cin >> f;
    cout << "Введите число: ";
    cin >> g;
    if (a > b) h = a;
    else h = b;
    if (c > h) h = c;
    if (d > h) h = d;
    if (e > h) h = e;
    if (f > h) h = f;

    // Четвёртое задание
    int ab, bc, m;
    cout << "Введите расстояние между пунктами А и В в км: ";
    cin >> ab;
    cout << "Введите расстояние между пунктами В и С в км: ";
    cin >> bc;
    cout << "Введите вес груза в кг: ";
    cin >> m;
    if (m > 2000) {
        cout << "Самолет " << m << " не поднимает" << endl;
    }
    else {
        int koef;

        if (m <= 500) koef = 1;
        else if (m <= 1000) koef = 4;
        else if (m <= 1500) koef = 7;
        else             koef = 9;

        int benzin_ab = ab * koef;
        int benzin_bc = bc * koef;
        if (benzin_ab > 300) {
            cout << "Невозможен полет по маршруту AB" << endl;
        }
        else if (benzin_bc > 300) {
            cout << "Невозможен полет по маршруту BC"<<endl;
        }
        else {
            int ostatok = 300 - benzin_ab - benzin_bc;
            if (ostatok >= 0) {
                cout << "Полет возможен без дозаправки"<<endl;
            }
            else {
                cout << "Полет возможен, но надо в B долить " << -ostatok << endl;
            }
        }
    }
}

