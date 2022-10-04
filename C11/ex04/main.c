# include <stdio.h>

int	ft_intcmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[] = {-3, -3, -2, 1, 5, -10};

	printf("%d\n", ft_is_sort(tab, 6, &ft_intcmp));
}

