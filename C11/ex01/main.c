#include <stdio.h>

int	add_one(int i)
{
	return (i + 1);
}

int main()
{
	int input[] = {2,3,4};
	int *output = ft_map(input, 3, &add_one);
	
	printf("%d\n",output[0]);
	printf("%d\n",output[1]);
	printf("%d\n",output[2]);
}
