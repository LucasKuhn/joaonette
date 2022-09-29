#include <stdio.h>
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int	main(void)
{
	printf("\nInvalid bases\n");
	printf("Invalid base_from: %s\n", ft_convert_base("1", "11234", "ABCD"));
	printf("Invalid base_to: %s\n", ft_convert_base("1", "ABCD", "11234"));

	printf("\nHex to dec\n");
	printf("2A: %s\n", ft_convert_base("2A", "0123456789ABCDEF", "0123456789"));
	printf("-2A: %s\n", ft_convert_base("-2A", "0123456789ABCDEF", "0123456789"));
	printf("-80000000: %s\n", ft_convert_base("-80000000", "0123456789ABCDEF", "0123456789"));
	printf("0: %s\n", ft_convert_base("0", "0123456789ABCDEF", "0123456789"));
	printf("Empty string: %s\n", ft_convert_base("", "0123456789ABCDEF", "0123456789"));
}

