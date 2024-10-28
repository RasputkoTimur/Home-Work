#pragma once
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Base {
protected:
    T1 value1;
    T2 value2;

public:
    Base();
    virtual ~Base();

    void setValue(const T1 val1, const T2 val2);

    T1 getValue1();
    T2 getValue2();
};

