#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	printf("Will check the numbers: 0 1 2 -1\n");
	
	printf("Expected outcome: \n");
	printf("PPPN \n");
	printf("User outcome: \n");

	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(2);
	ft_is_negative(-1);

	printf("\n");
}
