#pragma once

#include <iostream>

template <typename T>
void	iter(T* address, T length, void(*function)(const T&))
{
	int	i;

	i = 0;
	while (i < length)
	{
		function(address[i]);
		i++;
	}	
}

