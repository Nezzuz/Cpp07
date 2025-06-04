#pragma once

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T x, T y)
{
	if (x < y)
		return (x);
	else if (y < x)
		return (y);
	else
	{
		std::cout << "They're equal" << std::endl;
		return (0);
	}
}

template <typename T>
T max(T x, T y)
{
	if (x > y)
		return (x);
	else if (y > x)
		return (y);
	else
	{
		std::cout << "They're equal" << std::endl;
		return (0);
	}
}

