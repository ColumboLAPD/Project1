#pragma once
#include <iostream>

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0);

	friend std::ostream& operator << (std::ostream& out, const Point& p);
	friend std::istream& operator >> (std::istream& in, Point& p);
};

