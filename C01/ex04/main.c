#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 42;
	int b = 4;

	printf("Will divide %d by %d. Expecting A = %d and B = %d\n", a, b, a/b, a%b);

	ft_ultimate_div_mod(&a, &b);

	printf("Result:\n");
	printf("A: %d \n", a);
	printf("B: %d \n", b);
}