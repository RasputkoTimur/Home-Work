#pragma once
#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class Child2 : public Child<T1, T2, T3, T4> {
protected:
    T5 value5;
    T6 value6;

public:

    Child2();

    virtual ~Child2();

    void setValue(const T5 val5, const T6& val6);

    T5 getValue5();
        T6 getValue6();
};