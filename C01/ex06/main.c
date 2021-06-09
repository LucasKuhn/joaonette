#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "Hello 42!\n";

	printf("Calling function with: %s", &str[0]);

	printf("Result:\n%d\n", ft_strlen(str));
}
