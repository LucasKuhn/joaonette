#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	char dest[10] = "123";
	char src[] = "456";
	unsigned int size = 2;
	printf("dest: %s, src: %s\n", dest, src);
	printf("ft_strlcat = %s, strlcat = %s\n", ft_strlcat(dest, src, size), strlcat(dest, src, size));
}