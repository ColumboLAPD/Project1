#pragma once
#include <iostream>

class Fraction
{
private:
	int m_numerator = 0;
	int m_denominator = 1;

public:
	Fraction(int numerator = 0, int denominator = 1);

	void print();
	void reduce();
	static int nod(int a, int b);

	friend Fraction operator* (const Fraction& f, int value);
	friend Fraction operator* (const Fraction& f1, const Fraction& f2);
	friend Fraction operator* (int value, const Fraction& f);
	friend std::ostream& operator  << (std::ostream& out, const Fraction& f);
	friend std::istream& operator >> (std::istream& in, Fraction& f);
	
};

