#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	// original version
	char og_dest[10] = "123";
	char og_src[10]  = "456";
	printf("og_strncat: %s \n", strncat(og_dest, og_src, 0));
	printf("og_strncat: %s \n", strncat(og_dest, og_src, 1));
	printf("og_strncat: %s \n", strncat(og_dest, og_src, 10));

	// 42 version
	char ft_dest[10] = "123";
	char ft_src[10]  = "456";
	printf("ft_strncat: %s \n", ft_strncat(ft_dest, ft_src, 0));
	printf("ft_strncat: %s \n", ft_strncat(ft_dest, ft_src, 1));
	printf("ft_strncat: %s \n", ft_strncat(ft_dest, ft_src, 10));
}
