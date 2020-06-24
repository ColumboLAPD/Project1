#include <iostream>
#include "Fraction.h"
#include "Dollars.h"
#include "Point.h"

int main()
{
	std::cout << "-------Demonstration class Dollars-------" << std::endl;

	std::cout << Dollars(10).getDollars() + Dollars(20).getDollars() << std::endl;
	std::cout << Dollars(30).getDollars() + 10 << std::endl;
	std::cout << 50 + Dollars(20).getDollars() << std::endl;


	std::cout << "-------Demonstration class Fraction-------" << std::endl;

	(Fraction(3, 4) * Fraction(2, 7)).print();
	(Fraction(3, 4) * 3).print();
	(3 * Fraction(2, 7)).print();
	(Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4)).print();//вывод через функцию print

	std::cout << "Enter first fraction:\n";
	Fraction f1;
	std::cin >> f1;

	std::cout << "Enter second fraction:\n";
	Fraction f2;
	std::cin >> f2;

	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;//вывод через перегруженный оператор >>

	std::cout << "-------Demonstration class Point-------" << std::endl;

	std::cout << "Enter a point:\n";
	Point p1;
	std::cin >> p1;

	Point p2(2.3, 4.5, 6.7); 
	std::cout << p1 << p2 << std::endl;

	return 0;
}
