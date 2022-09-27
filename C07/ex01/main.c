#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*range;

	range = ft_range(0, 3);
	printf("ft_range(0, 3)  -> %d, %d, %d\n", range[0], range[1], range[2]);
	range = ft_range(-1, 2);
	printf("ft_range(-1, 2) -> %d, %d, %d\n", range[0], range[1], range[2]);
	range = ft_range(0, 0);
	printf("ft_range(0, 0)  -> %p\n", range);
}
