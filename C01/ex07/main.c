#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int i[] = {1,2,3,4,5,6,7,8,9,10};
	int size = 10;


	printf("Array before:\n");
	for ( int x = 0 ; x < size ; x++ ) {
		printf("%d ", i[x]);
	}

	ft_rev_int_tab(i, size);

	printf("\n\nArray after:\n");
	for ( int x = 0 ; x < size ; x++ ) {
		printf("%d ", i[x]);
	}

	printf("\n");

	return 0;
}
