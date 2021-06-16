
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "123456";
	printf("str: %s\n", str);

	char to_find[] = "45";
	printf("to find: %s\n", to_find);
	printf("ft_strstr = %s | strstr = %s\n", ft_strstr(str, to_find), strstr(str, to_find));

	char to_find2[] = "";
	printf("to find: %s\n", to_find2);
	printf("ft_strstr = %s | strstr = %s\n", ft_strstr(str, to_find2), strstr(str, to_find2));

	char to_find3[] = "¯\\_(ツ)_/¯";
	printf("to find: %s\n", to_find3);
	printf("ft_strstr = %s | strstr = %s\n", ft_strstr(str, to_find3), strstr(str, to_find3));
}