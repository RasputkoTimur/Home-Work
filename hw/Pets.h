#pragma once
#include <iostream>
using namespace std;
#include "Cat.h"
#include "Parrot.h"
#include "Dog.h"

class Pets :virtual public Cat,virtual public Dog,virtual public Parrot
{
public:
	Pets();
	~Pets();
	void getPetsInfo();
	void setPetsInfo(string, int, int, bool, string, int, int, bool, string, int, int, bool);
};

