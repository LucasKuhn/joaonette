#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Bonjour, 42";

	printf("Calling function with: %s \n", str);

 	int i = ft_strlen(str);

	printf("Result: %d\n", i);
}
