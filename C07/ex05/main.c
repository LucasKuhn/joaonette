#include <stdio.h>

char	**ft_split(char *str, char *charset);

int main()
{
	char str[] = "---This====is~~~not-=~a test!";
	
	char **arr = ft_split(str, "-=~");

	while(*arr)
	{
		printf("%s\n", *arr);
		arr++;
	}
}
