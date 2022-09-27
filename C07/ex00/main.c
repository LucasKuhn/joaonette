#include <stdio.h>

char	*ft_strdup(char *src);

int main()
{

	char str1[] = "Hello 42";
	char *str2 = ft_strdup(str1);

	printf("str1 ->(%s)\n", str1);
	printf("str2 ->(%s)\n", str2);
}
