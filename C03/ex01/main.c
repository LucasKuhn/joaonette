#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "1234567";
	char s2[] = "12345AAA";
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("cmp_n_0 = %d, og_cmp_n_0 = %d\n", ft_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
	printf("cmp_n_2 = %d, og_cmp_n_2 = %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
	printf("cmp_n_6 = %d, og_cmp_n_6 = %d\n", ft_strncmp(s1, s2, 6), strncmp(s1, s2, 6));
	printf("cmp_n_9 = %d, og_cmp_n_9 = %d\n", ft_strncmp(s1, s2, 9), strncmp(s1, s2, 9));
}