#include<stdio.h>

char *ft_strcapitalize(char *str);

int	main (void)
{
	char	teste1[] = "8eJ";
	char	teste2[] = "teSTINGw31rDCh4rs!@#";
	char	teste3[] = "))rEKT LOL";

	printf("This is a test: %s\n", teste1);
	printf("Is first letter capitalized? %s\n", (ft_strcapitalize(teste1)));
	printf("Is first letter capitalized? %s\n", (ft_strcapitalize(teste2)));
	printf("Is first letter capitalized? %s\n", (ft_strcapitalize(teste3)));
}

//-ReKt17+LOl MdR Mdr 4242l42