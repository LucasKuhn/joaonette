#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main()
{
    char *strs[] = {"a", "c", "bbb", "3", "2", "42", "1337", 0};

    int i;

    printf("Before: \n");
    i = 0;
    while(strs[i])
    {
        printf("%s\n", strs[i]);
        i++;
    }

    printf("Sorting... \n");
    ft_advanced_sort_string_tab(strs, ft_strcmp);

    printf("After: \n");
    i = 0;
    while(strs[i])
    {
        printf("%s\n", strs[i]);
        i++;
    }
}
