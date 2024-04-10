#include <iostream>
using namespace std;

void perevod(int ten_num) {
    int two_num[1000];
    int i = 0;
    while (ten_num > 0) {
        two_num[i] = ten_num % 2;
        ten_num = ten_num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << two_num[j];
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int a;

    cout << "Введите а: ";
    cin >> a;

    perevod(a);
}