
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[7] = "123";
	char src[4] = "456";
	int nb = 2;
	
	printf("src: %s\ndest: %s\nnb: %d\n", src, dest, nb);
	printf("strncat: %s | ", strncat(dest, src, nb));

	// Re-sets the strings
	strcpy(dest, "123");
	strcpy(src, "456");

	printf("ft_strncat: %s \n", ft_strncat(dest, src, nb));
}