#include "Average.h"

std::ostream& operator<<(std::ostream& out, const Average& a)
{
	out << static_cast<double>(a.m_total) / a.m_length << std::endl;
	return out;
}

Average& Average::operator+=(int value)
{
	m_total += value;
	++m_length;
	return *this;
}
