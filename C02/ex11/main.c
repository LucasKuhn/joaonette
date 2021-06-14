#include	<unistd.h>

void	ft_putstr_non_printable(char *str);

int	main (void)
{
	char	str[] = {'0', '0', ':', ' ', 0, '\0'};
	char	tens;
	char	ones;

	// ASCII control characters
	for(int i = 1; i < 32; i++)
	{
		tens = '0' + (i  / 10);
		ones = '0' + (i  % 10);
		str[0] = tens;
		str[1] = ones;
		str[4] = i;

		ft_putstr_non_printable(str);
		write(1,"\n",1);
	}
}