#include "Cat.h"

Cat::Cat()
{
}

Cat::~Cat()
{
}

void Cat::getCatInfo()
{
	cout << "�����: " << this->height << endl;
	cout << "������: " << this->width << endl;
	cout << "���� �����?: " << this->claws ? "��" : "���";
	cout << "��� ������(�)?: " << this->covered;
}

void Cat::setCatInfo(string a, int height, int width, bool b)
{
	this->height = height;
	this->width = width;
	this->covered = a;
	this->claws = b;
}
