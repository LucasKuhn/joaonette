#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{

	char dest[10] = "123";
	char src[] = "456";
	printf("src: %s, dest: %s\n", src, dest);
	printf("ft_strcat = %s, strcat = %s\n", ft_strcat(dest, src), strcat(dest, src));
}