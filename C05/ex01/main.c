#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%2d! = %d\n", -2, ft_recursive_factorial(-2));
	printf("%2d! = %d\n", -1, ft_recursive_factorial(-1));
	printf("%2d! = %d\n", 0, ft_recursive_factorial(0));
	printf("%2d! = %d\n", 1, ft_recursive_factorial(1));
	printf("%2d! = %d\n", 4, ft_recursive_factorial(4));
	printf("%2d! = %d\n", 12, ft_recursive_factorial(12));
}
