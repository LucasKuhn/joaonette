#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "111";

	char s2[] = "111";
	char s3[] = "112";
	char s4[] = "ABC";

	// original version
	printf("og_strcmp %s %s = %d\n", s1, s2, strcmp(s1,s2));
	printf("og_strcmp %s %s = %d\n", s1, s3, strcmp(s1,s3));
	printf("og_strcmp %s %s = %d\n", s1, s4, strcmp(s1,s4));

	// 42 version
	printf("ft_strcmp %s %s = %d\n", s1, s2, ft_strcmp(s1,s2));
	printf("ft_strcmp %s %s = %d\n", s1, s3, ft_strcmp(s1,s3));
	printf("ft_strcmp %s %s = %d\n", s1, s4, ft_strcmp(s1,s4));
}
