#include "Dollars.h"


Dollars::Dollars(int dollars)
{
	m_dollars = dollars;
}

int Dollars::getDollars() const
{
	return m_dollars;
}

//перегрузка оператора + как дружественной функции
/*Dollars operator+ (const Dollars& dl1, const Dollars& dl2)
{
	return Dollars(dl1.m_dollars + dl2.m_dollars);
}*/

Dollars operator+ (const Dollars& dl1, int a)
{
	return Dollars(dl1.m_dollars + a);
}

Dollars operator+ (int a, const Dollars& dl1)
{
	return Dollars(a + dl1.m_dollars);
}

Dollars operator- (const Dollars& dl1, const Dollars& dl2)
{
	return Dollars(dl1.m_dollars - dl2.m_dollars);
}

//перегрузка оператора + как обычной функции с использованием геттера 
Dollars operator+ (const Dollars& d1, const Dollars& d2)
{
	return Dollars(d1.getDollars() + d2.getDollars());
}