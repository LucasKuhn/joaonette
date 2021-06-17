#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	printf("ft_fibonacci(%2d)= %d\n", -5, ft_fibonacci(-5));
	printf("ft_fibonacci(%2d)= %d\n", 0, ft_fibonacci(0));
	printf("ft_fibonacci(%2d)= %d\n", 1, ft_fibonacci(1));
	printf("ft_fibonacci(%2d)= %d\n", 2, ft_fibonacci(2));
	printf("ft_fibonacci(%2d)= %d\n", 3, ft_fibonacci(3));
	printf("ft_fibonacci(%2d)= %d\n", 4, ft_fibonacci(4));
	printf("ft_fibonacci(%2d)= %d\n", 5, ft_fibonacci(5));
	printf("ft_fibonacci(%2d)= %d\n", 6, ft_fibonacci(6));
	printf("ft_fibonacci(%2d)= %d\n", 10, ft_fibonacci(10));
}
