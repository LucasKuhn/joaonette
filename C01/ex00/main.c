#include <stdio.h>

// void	ft_ft(int *nbr);

int	main(void)
{
	char str[3];

	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'y';

	printf("%s\n", str);

	*str = 'b';
	printf("%s\n", str);
}

