#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int i[] = {42, 43, 1, 2, 3};
	int size = 5;

	printf("Array before:\n");
	for ( int x = 0 ; x < size ; x++ )
	{
		printf("%d ", i[x]);
	}

	ft_sort_int_tab(i, size);
	printf("\n\n");

	printf("Array after:\n");
	for ( int x = 0 ; x < size ; x++ )
	{
		printf("%d ", i[x]);
	}

	printf("\n");
	return 0;
}