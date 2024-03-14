#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    // Первое задание

    /*int const MASS = 10;
    int a, b;
    cout << "Введите границы массива: ";
    cin >> a >> b;
    int massive[MASS];
    int min;
    int max;
    srand(time(NULL));

    for (int i = 0; i < MASS; i++)
    {
        massive[i] = a + rand() % (b - a);
        cout << massive[i] << " ";
    }
    min = massive[0];
    max = massive[0];
    for (int k = 1; k < MASS; k++)
    {
        if (massive[k] > max)
        {
            max = massive[k];
        }
        if (massive[k] < min)
        {
            min = massive[k];
        }

    }
    cout << min << max;*/

    // Второе задание

    /*int const MASS = 10;
    int a, b;
    cout << "Введите границы массива: ";
    cin >> a >> b;
    int massive[MASS];
    int min;
    cout << "Введите число: ";
    cin >> min;
    int sum = 0;
    srand(time(NULL));

    for (int i = 0; i < MASS; i++)
    {
        massive[i] = a + rand() % (b - a);
        cout << massive[i] << " ";
    }
    for (int i = 0; i < MASS; i++)
    {
        if (massive[i] < min)
        {
            sum = sum + massive[i];
        }
    }
    cout << endl << sum;*/

    // Третье задание

    /*int const MONTHS = 12;
    int massive[MONTHS];
    int a, b;
    for (int i = 0; i < MONTHS; i++)
    {
        cout << "Напишите прыбыль для " << i + 1 << "'го месяца " << endl;
        cin >> massive[i];
    }
    cout << "Напишите начало и конец диапазона: ";
    cin >> a;
    cin >> b;
    int min = a - 1;
    int max = a - 1;
    for (int i = a; i <= b; i++)
    {
        if (massive[i] > massive[max]) max = i;
        if (massive[i] < massive[min]) min = i;
    }
    cout << min << " " << max;*/

    // Четвёртое задание

    int const MASS = 10;
    int a, b;
    cout << "Введите границы массива: ";
    cin >> a >> b;
    int massive[MASS];

    int sum = 0;
    int min = 0;
    int max = 0;
    int umnozhenie = 1;
    int umnozhenie_chotnih = 1;
    int sum2 = 0;
    int aaa = 0;
    int bbb = 0;
    srand(time(NULL));

    for (int i = 0; i < MASS; i++)
    {
        massive[i] = a + rand() % (b - a);
        cout << massive[i] << " ";
    }

    for (int j = 0; j < MASS; j++)
    {
        cout << massive[j] << " ";
    }

    cout << endl;

    for (int i = 0; i < MASS; i++)
    {
        if (min > massive[i]) min = massive[i];
        else if (max < massive[i]) max = massive[i];
        if (massive[i] < 0)
        {
            if (aaa > 0) sum += massive[i];
            sum2 += massive[i];
            aaa++;
            bbb = massive[i];
        }
        if (massive[i] % 2 == 0) umnozhenie_chotnih *= massive[i];
    }
    for (int j = 0; j < MASS; j++)
    {
        if (massive[j] > min && massive[j] < max) umnozhenie *= massive[j];
    }
    cout << "Сумма: " << sum2 << endl << "Произведение: " << umnozhenie << endl << "Произведение с чет: " << umnozhenie_chotnih << endl << "Суммa между первым и последним отрицательными: " << sum - bbb << endl;
}
