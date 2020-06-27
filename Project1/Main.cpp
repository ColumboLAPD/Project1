#include <iostream>
#include "Fraction.h"

int main()
{
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

	//std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;//вывод через перегруженный оператор >>
	std::cout << f1 + f2 << std::endl;
	std::cout << 2 / f1 << std::endl;

	if (f1 == f2)
		std::cout << "True\n";
	else
		std::cout << "False\n";


	return 0;
}
