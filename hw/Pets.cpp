#include "Pets.h"

Pets::Pets()
{
}

Pets::~Pets()
{
}

void Pets::getPetsInfo()
{
	getCatInfo();
	cout << endl;
	getDogInfo();
	cout << endl;
	getParrotInfo();
	cout << endl;
}

void Pets::setPetsInfo(string a1, int b1, int c1, bool d1, string a2, int b2, int c2, bool d2, string a3, int b3, int c3, bool d3 )
{
	setCatInfo(a1, b1, c1, d1);
	setCatInfo(a2, b2, c2, d2);
	setCatInfo(a3, b3, c3, d3);
}
