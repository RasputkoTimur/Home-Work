#include "Dog.h"

Dog::Dog()
{
}

Dog::~Dog()
{
}

void Dog::getDogInfo()
{
	cout << "�����: " << this->height << endl;
	cout << "������: " << this->width << endl;
	cout << "���� �����?: " << this->claws ? "��" : "���";
	cout << "��� ������(�)?: " << this->covered;
}

void Dog::setDogInfo(string a, int height, int width, bool b)
{
	this->height = height;
	this->width = width;
	this->covered = a;
	this->claws = b;
}

