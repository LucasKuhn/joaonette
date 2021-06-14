#include<stdio.h>

char	*ft_strupcase(char *str);

int	main (void)
{
	char	empty[0];
	char	str1[] = "thisshouldbeuppercase";
	char	str2[] = "TeStInGW31RDch4rs!@#";

	printf("This should be uppercase: %s\n", (ft_strupcase(str1)));
	printf("This should be uppercase: %s\n", (ft_strupcase(str2)));
	printf("Test of an empty string:  %s\n", (ft_strupcase(empty)));
}
