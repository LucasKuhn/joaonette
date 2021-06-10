#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str1[] = "Sweet home alabama";
	char	str2[] = "Where the skies are so blue";
	int		n = 5;

	// The  strncpy()  function  is similar, except that at most n bytes of src are copied.  Warning: If there is no null byte among
	// the first n bytes of src, the string placed in dest will not be null-terminated.
	printf("(Should copy N bytes(%d) of str1 into str2)\n", n);

	printf("Before:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	
	ft_strcpy(str2, str1);
	
	printf("After:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
}