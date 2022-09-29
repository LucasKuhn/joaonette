#include "ft_stock_str.h" // t_stock_str provided 
#include <unistd.h> // write

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
	return ;
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par && par->str)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}

int	main(void)
{
	t_stock_str	*tab;

	char		*strs[] =  {"Hey", "I", "Just", "Met", "You", "And", "This", "Is", "Crazy"};
	tab = ft_strs_to_tab(9, strs);
	ft_show_tab(tab);

	// Segfault test (the following should print nothing)
	tab = ft_strs_to_tab(9, strs);
	ft_show_tab(tab);
	tab = ft_strs_to_tab(-1, strs);
	ft_show_tab(tab);
	tab = ft_strs_to_tab(0, strs);
	ft_show_tab(tab);
}
