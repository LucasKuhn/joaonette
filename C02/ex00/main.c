#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str1[] = "A long time ago";
	char	str2[] = "in a galaxy far, far away";

	printf("(Should copy str1 into str2)\n");

	printf("Before:\n");
	printf("Str1: %s\n", str1);
	printf("Str2: %s\n", str2);
	
	ft_strcpy(str2, str1);
	
	printf("After:\n");
	printf("Str1: %s\n", str1);
	printf("Str2: %s\n", str2);
}