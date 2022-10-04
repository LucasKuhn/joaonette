# include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	char *strs[] = {"1", "a", "abba3"};

	printf("(%d)\n", ft_count_if(strs, 3, &ft_str_is_alpha));
}
