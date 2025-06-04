#include "iter.hpp"

template <typename T>
static void	sum_to_iteration(const T& x)
{
	std::cout << x << std::endl;
}

int	main(void)
{
	char	array[] = {'a', 'b', 'c'};

	iter(array, 3, sum_to_iteration);
	return (0);
}
