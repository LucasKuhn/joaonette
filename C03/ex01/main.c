#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "123456";
	char s2[] = "123ABC";
	printf("Comparing %s and %s \n\n", s1, s2);
	
	// Original version
	printf("og_strncmp(%d) = %d\n", 0, strncmp(s1, s2, 0));
	printf("og_strncmp(%d) = %d\n", 1, strncmp(s1, s2, 1));
	printf("og_strncmp(%d) = %d\n", 3, strncmp(s1, s2, 3));
	printf("og_strncmp(%d) = %d\n", 9, strncmp(s1, s2, 9));

	printf("\n");

	// 42 version
	printf("ft_strncmp(%d) = %d\n", 0, ft_strncmp(s1, s2, 0));
	printf("ft_strncmp(%d) = %d\n", 1, ft_strncmp(s1, s2, 1));
	printf("ft_strncmp(%d) = %d\n", 3, ft_strncmp(s1, s2, 3));
	printf("ft_strncmp(%d) = %d\n", 9, ft_strncmp(s1, s2, 9));
}
