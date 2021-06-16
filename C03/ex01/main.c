#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "1234567";
	char s2[] = "12345AAA";
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("N = 0          | N = 2          | N = 6            | N = 9\n");
	printf("og_strncmp = %d | og_strncmp = %d | og_strncmp = %d | og_strncmp = %d\n",strncmp(s1, s2, 0), strncmp(s1, s2, 2), strncmp(s1, s2, 6), strncmp(s1, s2, 9));
	printf("ft_strncmp = %d | ft_strncmp = %d | ft_strncmp = %d | ft_strncmp = %d\n",ft_strncmp(s1, s2, 0), ft_strncmp(s1, s2, 2), ft_strncmp(s1, s2, 6), ft_strncmp(s1, s2, 9));
}