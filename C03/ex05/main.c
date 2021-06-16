
#include <stdio.h>
#include <bsd/string.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[10] = "123";
	char src[10]  = "4567";
	unsigned int size;


	printf("dest: %s, src: %s\n", dest, src);

	size = 0;
	printf("size: %u\n", size);
	printf("og_strlcat return: %zu | dest: %s \n", strlcat(dest, src, size), dest);
	strcpy(dest, "123"); // Reset the dest str
	printf("ft_strlcat return: %u | dest: %s \n", ft_strlcat(dest, src, size), dest);

	size = 1;
	printf("size: %u\n", size);
	printf("og_strlcat return: %zu | dest: %s \n", strlcat(dest, src, size), dest);
	strcpy(dest, "123"); // Reset the dest str
	printf("ft_strlcat return: %u | dest: %s \n", ft_strlcat(dest, src, size), dest);

	size = 2;
	printf("size: %u\n", size);
	printf("og_strlcat return: %zu | dest: %s \n", strlcat(dest, src, size), dest);
	strcpy(dest, "123"); // Reset the dest str
	printf("ft_strlcat return: %u | dest: %s \n", ft_strlcat(dest, src, size), dest);

	size = 4;
	printf("size: %u\n", size);
	printf("og_strlcat return: %zu | dest: %s \n", strlcat(dest, src, size), dest);
	strcpy(dest, "123"); // Reset the dest str
	printf("ft_strlcat return: %u | dest: %s \n", ft_strlcat(dest, src, size), dest);

	size = 6;
	printf("size: %u\n", size);
	printf("og_strlcat return: %zu | dest: %s \n", strlcat(dest, src, size), dest);
	strcpy(dest, "123"); // Reset the dest str
	printf("ft_strlcat return: %u | dest: %s \n", ft_strlcat(dest, src, size), dest);
}