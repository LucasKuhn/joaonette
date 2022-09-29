#include "ft.h"

int	main(void)
{
	ft_putchar('o');
	ft_putchar('k');
	ft_putchar('\n');
	return (0);
}

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
