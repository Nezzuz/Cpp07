#include "iter.hpp"

static void	sum_to_iteration(const int& x)
{
	std::cout << x + 1 << std::endl;
}

int	main(void)
{
	int	array[] = {1, 2, 3};

	iter(array, 3, sum_to_iteration);
	return (0);
}
