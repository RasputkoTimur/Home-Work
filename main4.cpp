#include <iostream>

using namespace std;

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
	Student* buf = new Student[size-1];

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
	Student* buf = new Student[size+1];
	
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

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int size = 3;

	Student* students = new Student[3];
	students[0] = Student{ "Mike", 12, 3.4, 723 };
	students[1] = Student{ "John", 13, 1.4, 512 };
	students[2] = Student{ "Tom", 48, 11.9, 130 };

	while (true)
	{
		cout << "Что выполнить?\n1) Удаление\n2) Добавление\n3) Обновление\n4) Вывод\n";
		int tempp;
		cin >> tempp;
		switch (tempp)
		{
		case 1:
		{
			int iDDD;
			cout << "Введите id студента: ";
			cin >> iDDD;
			deleteStudentId(students, size, iDDD);
			break;
		}
		case 2:
		{
			addStudentById(students, size);
			break;
		}
		case 3:
		{
			updStudentById(students, size);
			break;
		}
		case 4:
		{
			showAll(students, size);
			break;
		}
		default:
			break;
		}
	}
}
