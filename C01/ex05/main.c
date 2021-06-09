#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char str[] = "Hello 42!\n";

	printf("Calling function with: %s", &str[0]);

	printf("Result:\n");
	ft_putstr(&str[0]);
}