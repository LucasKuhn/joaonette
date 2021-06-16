
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "123456";
	char to_find[] = "45";
	printf("str: %s, to_find: %s\n", str, to_find);
	printf("ft_strstr = %s, strstr = %s\n", ft_strstr(str, to_find), strstr(str, to_find));
}