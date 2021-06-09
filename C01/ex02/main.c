#include <stdio.h>

void	ft_swap(int *a, int*b);

int	main(void)
{
	int a = 123;
	int b = 456;

	printf("A before: %d | B before: %d\n", a, b);
	ft_swap(&a, &b);
	printf("A after:  %d | B after:  %d\n", a, b);
}