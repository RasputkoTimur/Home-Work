#include <iostream>
using namespace std;
int main()
{
    // Первое задание
    
    int a;
    int b;
    int c;

    cin >> a;

    b = a/ 60;
    a = a% 60;
    c = b / 60;
    b = b % 60;
    cout  << c << " : " << b << " : " << a << endl;

    // Второе задание

    double a;
    int b;
    int c;
    cin >> a;
    b = a;
    c = (a - b) * 100;
    cout << b << " dollars, " << c << " cent.";

    // Третье задание

    int a;
    int b;
    cin >> a;
    b = a / 7;
    a = a % 7;
    cout << b << " weeks and " << a << " days.";

    // Четвёртое задание

    setlocale(LC_ALL, "rus");
    double speed;
    double distance;
    double time;
    int minutes;
    int seconds;
    cout << "Вычисление скорости бега" << endl;
    cout << "Введите длину дистанции (метров) =  ";
    cin >> distance;
    cout << "Введите время (мин.сек) = ";
    cin >> time;
    minutes = time;
    seconds = (time - minutes) * 100;
    time = (minutes * 60) + seconds;
    speed = distance / time * 3.6;
    cout << "Дистанция: " << distance << "м" << endl;
    cout << "Время: " << minutes << " мин " << seconds << " секунды = " << time << " секунд" << endl;
    cout << "Вы бежали со скоростью  " << speed << "км/ч" << endl;

}

