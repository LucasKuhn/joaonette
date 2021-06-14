#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "Sweet home alabama";
	char	dest[] = "Where the skies are so blue";

	printf("Src  string : %s\n", src);
	printf("Dest string : %s\n", dest);
	
	printf("DEST RESULTS\n");
	ft_strlcpy(dest, src, 0);
	printf("With size 0 : %s\n", dest);

	ft_strlcpy(dest, src, 1);
	printf("With size 1 : %s\n", dest);

	ft_strlcpy(dest, src, 6);
	printf("With size 6 : %s\n", dest);

	ft_strlcpy(dest, src, 99);
	printf("With size 99: %s\n", dest);

	printf("Returned val: %d\n", ft_strlcpy(dest, src, 0));
}