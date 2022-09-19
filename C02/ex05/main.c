#include<stdio.h>
int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	empty[0];
	char	str1[] = "MRUPPERCASE";
	char	str2[] = "SNEAKY SPACE";
	char	str3[] = "(-.-)Zzz...";

	printf("ft_str_is_uppercase - Check for uppercase only strings\n");

	printf("%s: %d\n", empty, ft_str_is_uppercase(empty));
	printf("%s: %d\n", str1, ft_str_is_uppercase(str1));
	printf("%s: %d\n", str2, ft_str_is_uppercase(str2));
	printf("%s: %d\n", str3, ft_str_is_uppercase(str3));
}
