#include "whatever.hpp"

int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 3;
	swap(a, b);
	std::cout << "MIN: " << min(a, b) << std::endl;
	std::cout << "MAX: " << max(a, b) << std::endl;
	return (0);
}
