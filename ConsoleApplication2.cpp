#include <iostream>
using namespace std;
int main()
{

	setlocale(LC_ALL, "rus");
	// Первое задание
	double R1, R2, R3, R0;
	cout << "Введите R1 : ";
	cin >> R1;
	cout << "Введите R2 : ";
	cin >> R2;
	cout << "Введите R3 : ";
	cin >> R3;

	R0 = 1 / R1 + 1 / R2 + 1 / R3;

	cout << R0 << endl;

	//Второе задание
	const double PI = 3.14;
	double s, l, r;
	cout << "Введите l: ";
	cin >> l;
	r = l / (2 * PI);
	s = PI * r * r;
	cout << s << endl << r << endl;
	
	//Третье задание
	double v, t, a, s;
	cout << "Введите v: ";
	cin >> v;
	cout << "Введите t: ";
	cin >> t;
	cout << "Введите a: ";
	cin >> a;
	s = v * t + (a * t * t) / 2;
	cout << s << endl;
}