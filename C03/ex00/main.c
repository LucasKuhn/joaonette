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
	printf("s1: %s, s2: %s, s3: %s, s4: %s\n", s1, s2, s3, s4);
	printf("og_strcmp_12 = %d | og_strcmp_13 = %d | og_strcmp_14 = %d\n", strcmp(s1, s2), strcmp(s1, s3), strcmp(s1, s4));
	printf("ft_strcmp_12 = %d | ft_strcmp_13 = %d | ft_strcmp_14 = %d\n", ft_strcmp(s1, s2), ft_strcmp(s1, s3), ft_strcmp(s1, s4));
}