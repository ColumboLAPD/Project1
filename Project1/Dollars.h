#pragma once
class Dollars
{

private:
	int m_dollars;

public:
	Dollars(int dollars);

	int getDollars() const;

	//friend Dollars operator+ (const Dollars& dl1, const Dollars& dl2);
	friend Dollars operator- (const Dollars& dl1, const Dollars& dl2);
	friend Dollars operator+ (const Dollars& dl1, int a);
	friend Dollars operator+ (int a, const Dollars& dl1);
};

Dollars operator+ (const Dollars& d1, const Dollars& d2);

