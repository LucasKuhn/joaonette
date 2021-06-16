#include	<stdio.h>
#include	<unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char str[] = "Hello 42!";

	write(1, "Calling with: Hello 42!\n",24);
	write(1, "Result:\n",8);
	ft_putstr(str);
	write(1, "\n", 1);
}