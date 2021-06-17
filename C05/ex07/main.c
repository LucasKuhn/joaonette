#include <stdio.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	printf("ft_find_next_prime(%2d) = %3d | Expecting: %3d\n", -1, ft_find_next_prime(-1), 2);
	printf("ft_find_next_prime(%2d) = %3d | Expecting: %3d\n", 0, ft_find_next_prime(0), 2);
	printf("ft_find_next_prime(%2d) = %3d | Expecting: %3d\n", 3, ft_find_next_prime(3), 3);
	printf("ft_find_next_prime(%2d) = %3d | Expecting: %3d\n", 4, ft_find_next_prime(4), 5);
	printf("ft_find_next_prime(%2d) = %3d | Expecting: %3d\n", 20, ft_find_next_prime(20), 23);
	printf("ft_find_next_prime(%2d) = %3d | Expecting: %3d\n", 1000000000, ft_find_next_prime(1000000000), 1000000007);
}