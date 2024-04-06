#include <iostream>
using namespace std;

int perevod(int n)
{
    int num = 0;
    int a = 1;
    int temp = n;

    while (temp)
    {
        int last_num = temp % 10;
        temp = temp / 10;
        num += last_num * a;
        a = a * 2;
    }

    return num;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int num;
    cout << "Введите число: ";
    cin >> num;

    cout << "В переводе: " << perevod(num) <<endl;
}