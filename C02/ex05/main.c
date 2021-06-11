#include<stdio.h>
int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	teste1[] = "AMIBALLERYET";
	char	teste2[] = "**xx__notsoimbaH4CK3R__xx";
	char	empty[0];

	printf("%s\n", teste1);
	printf("%s\n", teste2);
	printf("O retorno deve ser 0 e é: %d\n", ft_str_is_uppercase(teste1));
	printf("O retorno deve ser 1 e é: %d\n", ft_str_is_uppercase(teste2));
	printf("Retorno vazio deve ser 1 e é: %d\n", ft_str_is_uppercase(empty));
}
