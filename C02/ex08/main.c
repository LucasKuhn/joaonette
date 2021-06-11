#include<stdio.h>

char *ft_strlowcase(char *str);

int	main (void)
{
	char	teste1[] = "THISSHOULDBELOWERCASE";
	char	teste2[] = "TeStInGW31RDch4rs!@#";
	char	empty[0];

	printf("This is a test %s\n", teste1);
	printf("This should be lowercase %s\n", (ft_strlowcase(teste1)));
	printf("This should be lowercase %s\n", (ft_strlowcase(teste2)));
	printf("Test of an empty string: %s\n", (ft_strlowcase(empty)));
}
