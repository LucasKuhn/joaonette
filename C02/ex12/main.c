#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main (void)
{
	char	str[] = "Bonjour les aminches";
	unsigned int size = 16;

	ft_print_memory(str, size);
}