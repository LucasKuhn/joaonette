
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putnbr_base(int nb, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_putnbr_base(11686193, "lumberjackon");
	ft_putnbr_base(3387570376574, "lumberjackond sí");
	ft_putnbr_base(614566743205, "lumberjack stondig");
}