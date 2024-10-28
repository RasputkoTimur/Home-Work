#include "Base.h"
template<typename T1, typename T2>
inline Base<T1, T2>::Base()
{
}

template<typename T1, typename T2>
Base<T1, T2>::~Base()
{
}

template<typename T1, typename T2>
void Base<T1, T2>::setValue(const T1 val1, const T2 val2)
{
	value1 = val1;
	value2 = val2; 
}

template<typename T1, typename T2>
T1 Base<T1, T2>::getValue1()
{
	return T1();
}

template<typename T1, typename T2>
T2 Base<T1, T2>::getValue2()
{
	return T2();
}
