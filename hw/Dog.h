#pragma once
#include <iostream>
using namespace std;
class Dog
{
protected:
	string covered = "������";
	int width = 35;
	int height = 85;
	bool claws = true;
public:
	Dog();
	~Dog();
	void getDogInfo();
	void setDogInfo(string, int, int, bool);
};

