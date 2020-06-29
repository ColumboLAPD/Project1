#pragma once
#include <cassert>

class IntArray
{
private:
	int m_array[10] = { 0,1,2,3,4,5,6,7,8,9 };

public:

	int& operator [](const int index);
	const int& operator [] (const int index) const;
};

