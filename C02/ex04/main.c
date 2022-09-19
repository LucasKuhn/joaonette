#include<stdio.h>
int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	empty[] = "";
	char	str1[] = "abc";
	char	str2[] = "abC";
	char	str3[] = " ab";

	printf("ft_str_is_lowercase - Check for lowercase only strings\n");

	printf("%s : %d\n", empty, ft_str_is_lowercase(empty));
	printf("%s : %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s : %d\n", str2, ft_str_is_lowercase(str2));
	printf("%s : %d\n", str3, ft_str_is_lowercase(str3));
}
