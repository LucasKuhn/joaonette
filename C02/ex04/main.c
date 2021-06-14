#include<stdio.h>
int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	empty[] = "";
	char	str1[] = "abc";
	char	str2[] = "abC";
	char	str3[] = " ab";

	printf("Will test the strings:\n");

	printf("%s\n", empty);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);

	printf("Expecting:\n");

	printf("1");
	printf("1");
	printf("0");
	printf("0");
	printf("\n");

	printf("Result:\n");

	printf("%d", ft_str_is_lowercase(empty));
	printf("%d", ft_str_is_lowercase(str1));
	printf("%d", ft_str_is_lowercase(str2));
	printf("%d", ft_str_is_lowercase(str3));
	printf("\n");
}