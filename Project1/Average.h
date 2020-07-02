#pragma once
#include <iostream>
#include <cstdint>

class Average
{
private:
	int32_t m_total = 0;
	int8_t m_length = 0;

public:
	Average()
	{
	}

	Average& operator += (int value);
	friend std::ostream& operator << (std::ostream& out, const Average& a);
};

