#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	empty[] = "";
	char	uppercase[] = "ABC";
	char	lowercase[] = "xyz";
	char	other[] = "Salut!";

	printf("ft_str_is_alpha - Check for alphabet only strings\n");

	printf("%s : %d\n", empty, ft_str_is_alpha(empty));
	printf("%s : %d\n", uppercase, ft_str_is_alpha(uppercase));
	printf("%s : %d\n", lowercase, ft_str_is_alpha(lowercase));
	printf("%s : %d\n", other, ft_str_is_alpha(other));
}
