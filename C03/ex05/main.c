
#include <stdio.h>
#include <bsd/string.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[10] = "123";
	char src[10] = "456789";
	unsigned int size = 6;
	printf("dest: %s, src: %s, size: %u\n", dest, src, size);
	printf("og_strlcat return: %zu | dest: %s \n", strlcat(dest, src, size), dest);
	// Re-set the dest
	strcpy(dest, "123");
	printf("ft_strlcat return: %u | dest: %s \n", ft_strlcat(dest, src, size), dest);
}