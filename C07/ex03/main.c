#include <stdio.h> // printf
char	*ft_strjoin(int size, char **strs, char *sep);
int	main(void)
{
	char *strs[] = {"a", "b", "c", "42"};
	printf("%s\n", ft_strjoin(4, strs, "---"));
	return (0);
}
