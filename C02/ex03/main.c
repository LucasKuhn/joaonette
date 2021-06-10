#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	empty[] = "";
	char	str1[] = "123";
	char	str2[] = "000";
	char	str3[] = "0 0";

	printf("Will test the strings:\n");

	printf("%s\n", empty);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);

	printf("Expecting:\n");

	printf("1\n");
	printf("1\n");
	printf("1\n");
	printf("0\n");

	printf("Result:\n");

	printf("%d\n", ft_str_is_numeric(empty));
	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
}