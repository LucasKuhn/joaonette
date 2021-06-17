#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	for ( int nb = 0; nb <= 3 ; nb++ )
	{
		for ( int power =-1 ; power <= 3 ; power++ )
		{
			printf("%2d^%-2d = %2d | ", nb, power, ft_iterative_power(nb, power));
		}
		printf("\n");
	}
}
