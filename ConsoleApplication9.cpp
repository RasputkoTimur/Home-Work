#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int const MASS = 10;
    int a, b;
    cout << "Введите границы массива: ";
    cin >> a >> b;
    int massive[MASS];
    int min;
    int max;
    int temp;
    srand(time(NULL));

    for (int i = 0; i < MASS; i++)
    {
        massive[i] = a + rand() % (b - a);
        cout << massive[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < MASS - 1; i++) {
        temp = i;
        for (int j = i + 1; j < MASS; j++) {
            if (massive[j] < massive[temp]) {
                temp = j;
            }
        }
        swap(massive[temp], massive[i]);
    }
    cout << endl;

for (int k = 0; k < MASS; k++)
{
    cout << massive[k] << " ";
}
}