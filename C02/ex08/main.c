#include<stdio.h>

char *ft_strlowcase(char *str);

int	main (void)
{
	char	str1[] = "THISSHOULDBELOWERCASE";
	char	str2[] = "TeStInGW31RDch4rs!@#";
	char	empty[0];

	printf("This should be lowercase: %s\n", (ft_strlowcase(str1)));
	printf("This should be lowercase: %s\n", (ft_strlowcase(str2)));
	printf("Test of an empty string:  %s\n", (ft_strlowcase(empty)));
}
