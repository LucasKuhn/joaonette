#include<stdio.h>
int ft_str_is_printable(char *str);

int	main(void)
{
	char	empty[0];
	char	str1[] = "She makes a man wants to speak Spanish";
	char	str2[] = "\n ¿Cómo se llama? (Sí), bonita (sí)";

	printf("ft_str_is_printable - Check for printable only strings\n");

	printf("%s : %d\n", empty, ft_str_is_printable(empty));
	printf("%s : %d\n", str1, ft_str_is_printable(str1));
	printf("%s : %d\n", str2, ft_str_is_printable(str2));
}
