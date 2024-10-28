#include "Cat.h"

Cat::Cat()
{
}

Cat::~Cat()
{
}

void Cat::getCatInfo()
{
	cout << "Длина: " << this->height << endl;
	cout << "Ширина: " << this->width << endl;
	cout << "Есть когти?: " << this->claws ? "Да" : "Нет";
	cout << "Чем покрыт(а)?: " << this->covered;
}

void Cat::setCatInfo(string a, int height, int width, bool b)
{
	this->height = height;
	this->width = width;
	this->covered = a;
	this->claws = b;
}
