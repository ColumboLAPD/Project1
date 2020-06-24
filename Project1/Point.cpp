#include "Point.h"

Point::Point(double x, double y, double z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

std::ostream& operator << (std::ostream& out, const Point& p)
{
	std::cout << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")" << std::endl;

	return out;
}

std::istream& operator>>(std::istream& in, Point& p)
{
	in >> p.m_x >> p.m_y >> p.m_z;

	return in;
}
