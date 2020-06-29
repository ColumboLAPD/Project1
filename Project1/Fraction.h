#pragma once
#include <iostream>
#include <cassert>

class Fraction
{
private:
	int m_numerator = 0;
	int m_denominator = 1;

public:
	Fraction(int numerator = 0, int denominator = 1);
	Fraction(const Fraction& f);

	void print();
	void reduce();
	static int nod(int a, int b);
	static Fraction reverseFraction(int value);
	static Fraction reverseFraction(const Fraction& f);

	friend Fraction operator * (const Fraction& f, int value);
	friend Fraction operator * (const Fraction& f1, const Fraction& f2);
	friend Fraction operator * (int value, const Fraction& f);

	friend Fraction operator / (const Fraction& f1, const Fraction& f2);
	friend Fraction operator / (const Fraction& f, int value);
	friend Fraction operator /  (int value, const Fraction& f);

	friend Fraction operator + (const Fraction& f1, const Fraction& f2);
	friend Fraction operator + (const Fraction& f, int value);
	friend Fraction operator + (int value, const Fraction& f);

	friend Fraction operator - (const Fraction& f1, const Fraction& f2);
	friend Fraction operator - (const Fraction& f, int value);
	friend Fraction operator - (int value, const Fraction& f);

	friend bool operator == (const Fraction& f1, const Fraction& f2);
	friend bool operator != (const Fraction& f1, const Fraction& f2);
	friend bool operator > (const Fraction& f1, const Fraction& f2);
	friend bool operator >= (const Fraction& f1, const Fraction& f2);
	friend bool operator <= (const Fraction& f1, const Fraction& f2);
	friend bool operator < (const Fraction& f1, const Fraction& f2);

	Fraction& operator ++ ();
	Fraction& operator -- ();
	Fraction operator ++ (int);
	Fraction operator -- (int);

	Fraction operator - () const;
	bool operator ! () const;

	friend std::ostream& operator  << (std::ostream& out, const Fraction& f);
	friend std::istream& operator >> (std::istream& in, Fraction& f);

	operator double();
	
};

