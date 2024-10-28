#pragma once
#include <iostream>
using namespace std;
class Parrot
{
protected:
	string covered = "Перья";
	int width = 10;
	int height = 25;
	bool claws = false;
public:
	Parrot();
	~Parrot();
	void getParrotInfo();
	void setParrotInfo(string, int, int, bool);
};
