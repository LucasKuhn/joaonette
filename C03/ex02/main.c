#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	// original version
	char og_dest[10] = "123";
	char og_src[10]  = "456";
	printf("og_strcat: %s \n", strcat(og_dest, og_src));

	// 42 version
	char ft_dest[10] = "123";
	char ft_src[10]  = "456";
	printf("ft_strcat: %s \n", ft_strcat(ft_dest, ft_src));
}
