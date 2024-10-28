#include "Child.h"
template<typename T1, typename T2, typename T3, typename T4>
inline Child<T1, T2, T3, T4>::Child()
{
}

template<typename T1, typename T2, typename T3, typename T4>
Child<T1, T2, T3, T4>::~Child()
{
}

template<typename T1, typename T2, typename T3, typename T4>
void Child<T1, T2, T3, T4>::setValue(const T3 val3, const T4 val4)
{
	value3 = val3;
	value4 = val4
}

template<typename T1, typename T2, typename T3, typename T4>
T3 Child<T1, T2, T3, T4>::getValue3()
{
	return T3();
}

template<typename T1, typename T2, typename T3, typename T4>
T4 Child<T1, T2, T3, T4>::getValue4()
{
	return T4();
}
