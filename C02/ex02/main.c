#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	empty[] = "";
	char	uppercase[] = "ABC";
	char	lowercase[] = "xyz";
	char	other[] = "Salut!";

	printf("Will test the strings:\n");

	printf("%s\n", empty);
	printf("%s\n", uppercase);
	printf("%s\n", lowercase);
	printf("%s\n", other);

	printf("Expecting:\n");

	printf("1\n");
	printf("1\n");
	printf("1\n");
	printf("0\n");

	printf("Result:\n");

	printf("%d\n", ft_str_is_alpha(empty));
	printf("%d\n", ft_str_is_alpha(uppercase));
	printf("%d\n", ft_str_is_alpha(lowercase));
	printf("%d\n", ft_str_is_alpha(other));
}