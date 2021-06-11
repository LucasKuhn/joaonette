#include<stdio.h>
int ft_str_is_printable(char *str);

int	main(void)
{
	char	teste1[] = "this is printable";
	char	teste2[] = "this\0is\0not";
	char	empty[0];

	printf("%s\n", teste1);
	printf("%s\n", teste2);
	printf("O retorno deve ser 0 e é: %d\n", ft_str_is_printable(teste1));
	printf("O retorno deve ser 1 e é: %d\n", ft_str_is_printable(teste2));
	printf("Retorno vazio deve ser 1 e é: %d\n", ft_str_is_printable(empty));
}
