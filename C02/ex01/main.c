#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			str1[] = "Sweet home alabama";
	char			str2[] = "Where the skies are so blue";
	unsigned int	n = 5;

	printf("Should copy %d bytes of str1 into str2\n", n);

	printf("Before:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	
	ft_strncpy(str2, str1, n);
	
	printf("After:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
}