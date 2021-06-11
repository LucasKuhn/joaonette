#include<stdio.h>

char	*ft_strupcase(char *str);

int	main (void)
{
	char	teste1[] = "thisshouldbeuppercase";
	char	teste2[] = "TeStInGW31RDch4rs!@#";
	char	empty[0];

	printf("This is a test %s\n", teste1);
	printf("This should be uppercase %s\n", (ft_strupcase(teste1)));
	printf("This should be uppercase %s\n", (ft_strupcase(teste2)));
	printf("Test of an empty string: %s\n", (ft_strupcase(empty)));
}
