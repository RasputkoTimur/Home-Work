#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int findMaxIndex(int arr[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortStrings(char** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char* tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

struct Student
{
	string name;
	int age;
	float AVG;
	int id;
};

void show(Student p)
{
	cout << "Имя: " << p.name << endl << "Возраст: " << p.age << endl << "Средний балл: " << p.AVG << endl << "Id: " << p.id << endl;
}

void showAll(Student* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		show(p[i]);
	}
}

void showByMaxAVG(Student* p, int size)
{
	Student maxAVG = p[0];
	for (int i = 0; i < size; i++)
	{
		if (maxAVG.AVG < p[i].AVG)
		{
			maxAVG = p[i];
		}
	}
	show(maxAVG);
}

void studentId(Student* p, int size, int id)
{
	for (int i = 0; i < size; i++)
	{
		if (p[i].id = id)
		{
			show(p[i]);
			return;
		}
	}
}

void deleteStudentId(Student*& p, int& size, int id)
{
	Student* buf = new Student[size - 1];

	int temp = 0;

	for (int i = 0; i < size; i++)
	{
		if (p[i].id == id) temp = i;
	}

	for (int i = 0; i < temp; i++)
	{
		buf[i] = p[i];
	}
	for (int i = temp; i < size - 1; i++)
	{
		buf[i] = p[i + 1];
	}
	delete[] p;
	p = buf;
	size--;
}

void addStudentById(Student*& p, int& size)
{
	Student* buf = new Student[size + 1];

	for (int i = 0; i < size; i++)
	{
		buf[i] = p[i];
	}
	cout << "Введите Имя, Возраст, Средний балл, и id студента." << endl;
	string name;
	int age;
	float AVG;
	int id;
	cin >> name >> age >> AVG >> id;

	buf[size].name = name;
	buf[size].age = age;
	buf[size].AVG = AVG;
	buf[size].id = id;

	delete[] p;
	p = buf;
	size++;
}

void updStudentById(Student*& p, int& size)
{
	cout << "Информацию о каком пользователе желаете обновить(id)?";
	int idD;
	cin >> idD;

	int temp = -1;

	for (int i = 0; i < size; i++)
	{
		if (p[i].id == idD) {
			temp = i;
			break;
		}
	}

	if (temp != -1) {

		cout << "Введите Имя, Возраст, Средний балл студента." << endl;
		string name;
		int age;
		float AVG;
		cin >> name >> age >> AVG;

		p[temp].name = name;
		p[temp].age = age;
		p[temp].AVG = AVG;
	}
	else cout << "Студент не найден.";
}

void transpose(int matrix[][4], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}

int** multiplyMatrix(int** m1, int r1, int c1, int** m2, int r2, int c2) {
	if (c1 != r2)
		return nullptr;
	int** res = new int* [r1];
	for (int i = 0; i < r1; i++) {
		res[i] = new int[c2];
		for (int j = 0; j < c2; j++) {
			res[i][j] = 0;
			for (int k = 0; k < c1; k++) {
				res[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	return res;
}

int* findElement(int matrix[][4], int rows, int cols, int element) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] == element) {
				return new int[2] {i, j};
			}
		}
	}
	return 0;
}


int main()
{
	setlocale(LC_ALL, "rus");

	using namespace std;

	/*int rows, cols;
	cout << "Введите количество строк: ";
	cin >> rows;
	cout << "Введите количество столбцов: ";
	cin >> cols;


	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[cols];
	}

	cout << "Введите элементы матрицы:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}


	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum += matrix[i][j];
		}
	}

	cout << "Сумма всех элементов матрицы: " << sum << endl;

	for (int i = 0; i < rows; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;*/

}
