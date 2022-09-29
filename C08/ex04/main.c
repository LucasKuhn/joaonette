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

	char		*strs[] =  {"bonjour", "42", 0};

	// With AC equals to 2 (proper size):
	write(1,"AC=2:\n", 7);
	tab = ft_strs_to_tab(2, strs);
	ft_show_tab(tab);
	// With AC equals to 3":
	write(1,"AC=3:\n", 6);
	tab = ft_strs_to_tab(3, strs);
	ft_show_tab(tab);
	// With AC equals to 0":
	write(1,"AC=0:\n", 6);
	tab = ft_strs_to_tab(0, strs);
	ft_show_tab(tab);
	// With AC equals to -1":
	write(1,"AC=-1:\n", 7);
	tab = ft_strs_to_tab(-1, strs);
	ft_show_tab(tab);
}
