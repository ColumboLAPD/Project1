#include <iostream>
#include <vector>
#include <algorithm>
#include "Fraction.h"
#include "Car.h"

int main()
{
	/*(Fraction(3, 4) * Fraction(2, 7)).print();
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

	if (f1 < f2)
		std::cout << "True\n";
	else
		std::cout << "False\n";*/

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

	return 0;
}
