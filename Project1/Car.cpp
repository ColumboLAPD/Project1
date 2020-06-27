#include "Car.h"

std::ostream& operator<<(std::ostream& out, const Car& c)
{
    std::cout << "(" << c.m_company << ", " << c.m_models << ")\n";
    return out;
}

bool operator<(const Car& c1, const Car& c2)
{
    if (c1.m_company < c2.m_company)
        return true;
    if (c1.m_company > c2.m_company)
        return false;
    if (c1.m_models < c2.m_models)
        return true;
    if (c1.m_models > c2.m_models)
        return false;

    return false;
}

Car::Car(std::string company, std::string models)
{
    m_company = company;
    m_models = models;
}
