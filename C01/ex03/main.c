#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 42;
	int b = 4;
	int div; 
	int mod; 

	printf("Will divide %d by %d. Expecting div = %d and mod = %d\n", a, b, a/b, a%b);

	ft_div_mod(a, b, &div, &mod);

	printf("Result:\n");
	printf("Div: %d \n", div);
	printf("Mod: %d \n", mod);
}