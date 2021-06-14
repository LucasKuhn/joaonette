#include<stdio.h>
int ft_str_is_printable(char *str);

int	main(void)
{
	char	empty[0];
	// Printable 
	char	str1[] = "Como se llama? (Si), bonita (si)";
	char	str2[] = "!{|}~";
	// Non-printable
	char	str3[] = {1,2,3};
	char	str4[] = "Shakira \n Shakira";

	printf("Expecting:\n");
	printf("1");
	printf("1");
	printf("1");
	printf("0");
	printf("0");
	printf("\n");

	printf("Result:\n");
	printf("%d", ft_str_is_printable(empty));
	printf("%d", ft_str_is_printable(str1));
	printf("%d", ft_str_is_printable(str2));
	printf("%d", ft_str_is_printable(str3));
	printf("%d", ft_str_is_printable(str4));
	printf("\n");
}
