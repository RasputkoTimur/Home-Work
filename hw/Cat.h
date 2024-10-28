#pragma once
#include <iostream>
using namespace std;
class Cat
{
protected:
	string covered = "Шерсть";
	int width = 25;
	int height = 40;
	bool claws = true;
public:
	Cat();
	~Cat();
	void getCatInfo();
	void setCatInfo(string, int, int, bool);
};

