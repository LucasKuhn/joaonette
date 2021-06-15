#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[10] = "123";
	char src[] = "456";
	printf("src: %s, dest: %s\n", src, dest);
	printf("strcat = %s\n", strcat(dest, src));

	char dest2[10] = "123";
	char src2[] = "456";
	printf("ft_strcat = %s\n", ft_strcat(dest2, src2));
}
