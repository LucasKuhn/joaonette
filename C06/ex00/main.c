#include<stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char string[] = "Don't Panic!";
	printf("Original address is: %p\n", string);
	printf("Original string is: %s\n", string);
	printf("Expected different than original adress: %p\n", ft_strdup(string));
	printf("Expected same as original string: %s\n", ft_strdup(string));
}
