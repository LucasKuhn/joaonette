
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{

	char dest[10] = "123";
	char src[] = "456";
	int nb = 2;
	printf("src: %s, dest: %s\n", src, dest);
	printf("ft_strncat = %s, strncat = %s\n", ft_strncat(dest, src, nb), strncat(dest, src, nb));
}