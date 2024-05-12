#include <iostream>
using namespace std;

void perevod(int num, int sistema)
{
    int a[36];
    int i = 0;
    int n;
    int ostatok;
    int num1;

    while (num > 0) {
        num1 = num;
        num /= sistema;
        ostatok = num1 - num * sistema;
        a[i] = ostatok;
        i++;
    }
    i--;
    for (int j = i;j >= 0;j--) {
        if (a[j] >= 10) {
            n = a[j] + 55;
            cout << char(n);
        }
        else  cout << a[j];
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int num;
    int sistema;

    cout << "Введите число в десятичной системе счисления: ";
    cin >> num;
    cout << "В какую систему счисления его перевести?: ";
    cin >> sistema;
    perevod(num, sistema);
}