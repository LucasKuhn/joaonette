#include <stdio.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	printf("ft_find_next_prime(%d) = %d\n", -1, ft_find_next_prime(-1));
	printf("ft_find_next_prime(%d) = %d\n", 0, ft_find_next_prime(0));
	printf("ft_find_next_prime(%d) = %d\n", 3, ft_find_next_prime(3));
	printf("ft_find_next_prime(%d) = %d\n", 4, ft_find_next_prime(4));
	printf("ft_find_next_prime(%d) = %d\n", 20, ft_find_next_prime(20));
	printf("ft_find_next_prime(%d) = %d\n", 1234567890, ft_find_next_prime(1234567890));
}
