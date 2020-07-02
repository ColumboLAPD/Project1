//#include <iostream>
#include <vector>
#include <algorithm>
#include "Fraction.h"
#include "Car.h"
#include "IntArray.h"
#include "GradeMap.h"
#include "Average.h"

void StudentGradeDemonstration()
{
	GradeMap grades;
	grades["John"] = 'A';
	grades["Martin"] = 'B';
	std::cout << "John has a grade of " << grades["John"] << std::endl;
	std::cout << "Martin has a grade of " << grades["Martin"] << std::endl;
}

void fractionDemo()
{
	//(Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4)).print();//вывод через функцию print*/
	Fraction f5(Fraction(3, 7));
	Fraction f6(f5);

	std::cout << "Enter first fraction:\n";
	Fraction f1;
	std::cin >> f1;

	std::cout << "Enter second fraction:\n";
	Fraction f2;
	std::cin >> f2;

	f2 = f6;

	std::cout << static_cast<double>(f1) + 5.0 << std::endl;
	std::cout << f2 << std::endl;

	//std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;//вывод через перегруженный оператор >>
	//std::cout << f1 + f2 << std::endl;
	//std::cout << 2 / f1 << std::endl;

	/*if (f1 < f2)
		std::cout << "True\n";
	else
		std::cout << "False\n";*/
}

void carDemo()
{
	std::vector<Car> v;
	v.push_back(Car("Ford", "Mustang"));
	v.push_back(Car("Ford", "Focus"));
	v.push_back(Car("Lada", "Niva"));
	v.push_back(Car("Lada", "Vesta"));
	v.push_back(Car("BMW", "M5"));

	std::sort(v.begin(), v.end());

	for (Car& c : v)
	{
		std::cout << c;
	}
}

void intArrayDemo()
{
	IntArray array;
	array[4] = 10;
	std::cout << array[4] << std::endl;

	const IntArray carray;
	//carray[3] = 10;
	std::cout << carray[3] << std::endl;
}

void averageDemo()
{
	Average avg;
	avg += 5;
	std::cout << avg;

	avg += -2;
	std::cout << avg;

	(avg += 7) += 3;
	std::cout << avg;
}

int main()
{
	averageDemo();

	return 0;
}
