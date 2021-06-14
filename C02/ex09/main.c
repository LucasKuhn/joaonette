#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main (void)
{
	char	str1[] = "UPPERCASE WORDS";
	char	str2[] = "4lfa num3r1c w0rd5";
	char	str3[] = "weird-spacing|between=words";
	char	str4[] = "))even{{weirder}}spacing((";

	printf("Should capitalize: %s\n", (ft_strcapitalize(str1)));
	printf("Should capitalize: %s\n", (ft_strcapitalize(str2)));
	printf("Should capitalize: %s\n", (ft_strcapitalize(str3)));
	printf("Should capitalize: %s\n", (ft_strcapitalize(str4)));
}
