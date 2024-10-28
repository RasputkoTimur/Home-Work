#pragma once
#include <iostream>
using namespace std;
template <typename T1, typename T2, typename T3, typename T4>
class Child : public Base<T1, T2> {
protected:
    T3 value3;
    T4 value4;

public:
    Child();
    virtual ~Child();
    void setValue(const T3 val3, const T4 val4);

    T3 getValue3();
    T4 getValue4();
};