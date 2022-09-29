#include "ft_stock_str.h"
#include <unistd.h>

void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	t_stock_str	tab = { .str = "123", .size = 3, .copy = "123" };
	t_stock_str	tab2 = { .str = 0, .size = 0, .copy = 0 };

	t_stock_str	tab_p[2];
	tab_p[0] = tab;
	tab_p[1] = tab2;

	ft_show_tab(tab_p);
}
