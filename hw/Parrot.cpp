#include "Parrot.h"

Parrot::Parrot()
{
}

Parrot::~Parrot()
{
}

void Parrot::getParrotInfo()
{
	cout << "�����: " << this->height << endl;
	cout << "������: " << this->width << endl;
	cout << "���� �����?: " << this->claws ? "��" : "���";
	cout << "��� ������(�)?: " << this->covered;
}

void Parrot::setParrotInfo(string a, int height, int width, bool b)
{
	this->height = height;
	this->width = width;
	this->covered = a;
	this->claws = b;
}
