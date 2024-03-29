#include <iostream>
using namespace std;


int my_pow(float a, float b)
{
	float pow = 1;
	for (int i = 0; i < b; i++)
	{
		pow *= a;
	}
	return pow;
}

int sum_range(int a, int b)
{
	int sum = 0;
	for (int i = a+1; i < b; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	setlocale(LC_ALL, "rus");


	// Первое задание

	int first_pow, second_pow;
	cout << "Введите число: ";
	cin >> first_pow;
	cout << "Введите в какую степень его возвести: ";
	cin >> second_pow;

	cout << my_pow(first_pow, second_pow);

	cout << endl;
	// Второе задание

	int first_sum, second_sum;
	cout << "Введите первое число: ";
	cin >> first_sum;
	cout << "Введите второе число: ";
	cin >> second_sum;

	cout << sum_range(first_sum, second_sum);
}