#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	printf("Printing 0: \n");
	ft_putnbr(0);
	printf("\n");

	printf("Printing 2147483647: \n");
	ft_putnbr(2147483647);
	printf("\n");

	printf("Printing -2147483648: \n");
	ft_putnbr(-2147483648);
	printf("\n");
}
