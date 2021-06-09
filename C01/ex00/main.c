#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	i;

	i = 21;
	printf("i value is:     %d\n", i);
	ft_ft(&i);
	printf("i value became: %d\n", i);
}