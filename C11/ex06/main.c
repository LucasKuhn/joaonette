#include <stdio.h>
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
    ft_sort_string_tab(strs);

    printf("After: \n");
    i = 0;
    while(strs[i])
    {
        printf("%s\n", strs[i]);
        i++;
    }
}
