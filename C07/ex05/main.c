#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**arr;

	arr = ft_split("~~~This###is***not~#*a test!", "~#*");
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
	printf("%s\n", arr[4]);
}
