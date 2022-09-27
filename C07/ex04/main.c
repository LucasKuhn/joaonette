#include <stdio.h>
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int	main(void)
{
	printf("Hex to dec:\n");
	printf("2A -> %s\n", ft_convert_base("2A", "0123456789ABCDEF", "0123456789"));
	printf("-2A -> %s\n", ft_convert_base("-2A", "0123456789ABCDEF", "0123456789"));
	printf("-80000000 -> %s\n", ft_convert_base("-80000000", "0123456789ABCDEF", "0123456789"));
}
