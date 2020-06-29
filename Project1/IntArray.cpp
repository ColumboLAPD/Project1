#include "IntArray.h"

int& IntArray::operator[](const int index)
{
    assert(index >= 0 && index < 10);

    return m_array[index];
}

const int& IntArray::operator[](const int index) const
{
    assert(index >= 0 && index < 10);

    return m_array[index];
}
