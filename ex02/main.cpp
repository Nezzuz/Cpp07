#include "Array.hpp"

int	main(void)
{
	Array<std::string> array(2);
	array[0] = "A";
	array[1] = "B";	
	try
	{
		std::cout << array[0] << std::endl;
		std::cout << array[1] << std::endl;
		array[2] = "C";
		std::cout << array[2] << std::endl;
	}
	catch	(std::out_of_range &e)
	{
		std ::cout << e.what() << std::endl;
	}
	return (0);
}

