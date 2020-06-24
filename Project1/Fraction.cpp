#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int numerator, int denominator)
	: m_numerator(numerator), m_denominator(denominator)
{
	reduce();
}

void Fraction::print()
{
	std::cout << m_numerator << "/" << m_denominator << std::endl;
}

int Fraction::nod(int a, int b)
{
	if (b == 0)
	{
		if (a > 0)
			return a;
		else
			return -a;
	}
	else
		nod(b, a % b);
}

void Fraction::reduce()
{
	int NOD = nod(m_numerator, m_denominator);
	m_numerator /= NOD;
	m_denominator /= NOD;
}

Fraction operator* (const Fraction& fraction, int value)
{
	Fraction result(0, 1);
	result.m_numerator = fraction.m_numerator * value;
	result.m_denominator = fraction.m_denominator;

	return result;
}

Fraction operator* (const Fraction& f1, const Fraction& f2)
{
	Fraction result(1, 1);
	result.m_numerator = f1.m_numerator * f2.m_numerator;
	result.m_denominator = f1.m_denominator * f2.m_denominator;

	return result;
}

Fraction operator* (int value, const Fraction& f)
{
	Fraction result(1, 1);
	result.m_numerator = value * f.m_numerator;
	result.m_denominator = f.m_denominator;

	return result;
}

std::ostream& operator << (std::ostream& out, const Fraction& f)
{
	
	std::cout << f.m_numerator << "/" << f.m_denominator;
	return out;
}

std::istream& operator >> (std::istream& in, Fraction& f)
{
	in >> f.m_numerator >> f.m_denominator;
	return in;
}


