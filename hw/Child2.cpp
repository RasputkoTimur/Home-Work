#include "Child2.h"
template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline Child2<T1, T2, T3, T4, T5, T6>::Child2()
{
}

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
Child2<T1, T2, T3, T4, T5, T6>::~Child2()
{
}

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
void Child2<T1, T2, T3, T4, T5, T6>::setValue(const T5 val5, const T6& val6)
{
	value5 = val5;
	value6 = val6
}
