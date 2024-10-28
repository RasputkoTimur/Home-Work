#include "Parrot.h"

Parrot::Parrot()
{
}

Parrot::~Parrot()
{
}

void Parrot::getParrotInfo()
{
	cout << "Длина: " << this->height << endl;
	cout << "Ширина: " << this->width << endl;
	cout << "Есть когти?: " << this->claws ? "Да" : "Нет";
	cout << "Чем покрыт(а)?: " << this->covered;
}

void Parrot::setParrotInfo(string a, int height, int width, bool b)
{
	this->height = height;
	this->width = width;
	this->covered = a;
	this->claws = b;
}
