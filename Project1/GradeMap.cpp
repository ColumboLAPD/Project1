#include "GradeMap.h"

GradeMap::GradeMap()
{
}

char& GradeMap::operator[](const std::string& name)
{
	for (auto &var : m_map)
	{
		if (var.name == name)
			return var.grade;
	}
	StudentGrade temp{ name, ' ' };
	m_map.push_back(temp);
	return m_map.back().grade;
}
