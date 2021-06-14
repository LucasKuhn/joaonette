#include	<unistd.h>
#include	<stdio.h>

void	ft_putstr_non_printable(char *str);

int	main (void)
{
	char str[] = {0};

	write(1,"Char 10  to 15  : ",18);	
	for(int i = 10; i <= 15; i++)
	{
		str[0] = i;
		ft_putstr_non_printable(str);
		write(1," ",1);
	}
	write(1,"\n",1);

	write(1,"Char 225 to 230 : ",18);
	for(int i = 225; i <= 230; i++)
	{
		str[0] = i;
		ft_putstr_non_printable(str);
		write(1," ",1);
	}
	write(1,"\n",1);
	char str2[] = "São as águas de março fechando o verão";
	ft_putstr_non_printable(str2);
	write(1,"\n",1);
}