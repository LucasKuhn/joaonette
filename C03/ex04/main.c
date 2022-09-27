
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "123456";
	printf("str: %s\n\n", str);

	char to_find1[] = "45";
	char to_find2[] = "";
	char to_find3[] = "Hello";

	// original version
	printf("og_strstr(\"%s\") = %s\n", to_find1, strstr(str, to_find1));
	printf("og_strstr(\"%s\") = %s\n", to_find2, strstr(str, to_find2));
	printf("og_strstr(\"%s\") = %s\n", to_find3, strstr(str, to_find3));

	printf("\n");
	// 42 version
	printf("ft_strstr(\"%s\") = %s\n", to_find1, ft_strstr(str, to_find1));
	printf("ft_strstr(\"%s\") = %s\n", to_find2, ft_strstr(str, to_find2));
	printf("ft_strstr(\"%s\") = %s\n", to_find3, ft_strstr(str, to_find3));
}
