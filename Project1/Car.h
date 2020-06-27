#pragma once
#include <iostream>

class Car
{
private:
	std::string m_models;
	std::string m_company;

public:
	Car(std::string company, std::string models);

	friend std::ostream& operator << (std::ostream& out, const Car& c);
	friend bool operator < (const Car& c1, const Car& c2);
};

