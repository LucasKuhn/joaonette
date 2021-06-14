#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			src[] = "Sweet";
	char			dest[] = "Home alabama";
	unsigned int	n;

	printf("ft_strncpy - Copy N bytes of src into dest\n");

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	n = 5;
	ft_strncpy(dest, src, n);
	printf("With N=5  : %s\n", dest);

	n = 10;
	ft_strncpy(dest, src, n);
	printf("With N=10 : %s\n", dest);
}