#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	empty[] = "";
	char	str1[] = "123";
	char	str2[] = "000";
	char	str3[] = "0 0";

	printf("ft_str_is_numeric - Chech for numbers only strings\n");

	printf("%s : %d\n", empty, ft_str_is_numeric(empty));
	printf("%s : %d\n", str1, ft_str_is_numeric(str1));
	printf("%s : %d\n", str2, ft_str_is_numeric(str2));
	printf("%s : %d\n", str3, ft_str_is_numeric(str3));
}