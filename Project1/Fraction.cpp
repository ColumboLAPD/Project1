#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int numerator, int denominator)
	: m_numerator(numerator), m_denominator(denominator)
{
	reduce();
}

void Fraction::print()
{
	reduce();
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

Fraction Fraction::reverseFraction(int value)
{
	return Fraction(1, value);
}

Fraction Fraction::reverseFraction(const Fraction& f)
{
	return Fraction(f.m_denominator, f.m_numerator);
}

Fraction& Fraction::operator++()
{
	m_numerator += m_denominator;
	return *this;
}

Fraction& Fraction::operator--()
{
	m_numerator -= m_denominator;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction temp(m_numerator, m_denominator);
	++(*this);
	return temp;
}

Fraction Fraction::operator--(int)
{
	Fraction temp(m_numerator, m_denominator);
	--(*this);
	return temp;
}

Fraction Fraction::operator-() const
{
	return Fraction(-m_numerator, m_denominator);
}

bool Fraction::operator!() const
{
	return (m_numerator == 0 && m_denominator == 1);
}

void Fraction::reduce()
{
	int NOD = nod(m_numerator, m_denominator);
	m_numerator /= NOD;
	m_denominator /= NOD;
}

Fraction operator* (const Fraction& f, int value)
{
	return Fraction(f.m_numerator * value, f.m_denominator);
}

Fraction operator* (const Fraction& f1, const Fraction& f2)
{
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}

Fraction operator* (int value, const Fraction& f)
{
	return Fraction(value * f.m_numerator, f.m_denominator);
}

Fraction operator/(const Fraction& f1, const Fraction& f2)
{
	Fraction temp = Fraction::reverseFraction(f2);
	return f1 * temp;
}

Fraction operator/(const Fraction& f, int value)
{
	return f * Fraction::reverseFraction(value);
}

Fraction operator/(int value, const Fraction& f)
{
	return value * Fraction::reverseFraction(f);
}

Fraction operator+(const Fraction& f1, const Fraction& f2)
{
	int tempDenominator = f1.m_denominator * f2.m_denominator;
	int tempNumerator = f1.m_numerator * f2.m_denominator + f2.m_numerator * f1.m_denominator;

	return Fraction(tempNumerator, tempDenominator);
}

Fraction operator+(const Fraction& f, int value)
{
	int tempNumerator = f.m_numerator + f.m_denominator * value;

	return Fraction(tempNumerator, f.m_denominator);
}

Fraction operator+(int value, const Fraction& f)
{
	int tempNumerator = f.m_numerator + f.m_denominator * value;

	return Fraction(tempNumerator, f.m_denominator);
}

Fraction operator-(const Fraction& f1, const Fraction& f2)
{
	return f1 + (-f2);
}

Fraction operator-(const Fraction& f, int value)
{
	return f + (-value);
}

Fraction operator-(int value, const Fraction& f)
{
	return value + (-f);
}

bool operator==(const Fraction& f1, const Fraction& f2)
{
	return (f1.m_numerator == f2.m_numerator && f1.m_denominator == f2.m_denominator);
}

bool operator!=(const Fraction& f1, const Fraction& f2)
{
	return !(f1 == f2);
}

bool operator>(const Fraction& f1, const Fraction& f2)
{
	return (double)f1.m_numerator / f1.m_denominator >
		(double)f2.m_numerator / f2.m_denominator;
}

bool operator>=(const Fraction& f1, const Fraction& f2)
{
	return (double)f1.m_numerator / f1.m_denominator >=
		(double)f2.m_numerator / f2.m_denominator;
}

bool operator<=(const Fraction& f1, const Fraction& f2)
{
	return !(f1 > f2);
}

bool operator<(const Fraction& f1, const Fraction& f2)
{
	return !(f1 >= f2);
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


