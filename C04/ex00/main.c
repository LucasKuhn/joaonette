#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Bonjour, 42";

	printf("Str: %s \n", str);

 	int i = ft_strlen(str);

	printf("Result: %d\n", i);
}
