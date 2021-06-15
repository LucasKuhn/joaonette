#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[7] = "123";
	char src[4] = "456";
	
	printf("src: %s\ndest: %s\n", src, dest);
	printf("strcat: %s | ", strcat(dest, src));

	// Re-sets the strings
	strcpy(dest, "123");
	strcpy(src, "456");

	printf("ft_strcat: %s \n", ft_strcat(dest, src));
}