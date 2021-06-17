#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	char str1[] = "\f\n\r\t\v123";
	char str2[] = "123hi5";
	char str3[] = "++++42";
	char str4[] = "-++-42";
	char str5[] = " ---01";
	char str6[] = "-  123";
	char str7[] = "";

	printf("str: %s | ft_atoi: %d\n", str1, ft_atoi(str1));
	printf("str: %s | ft_atoi: %d\n", str2, ft_atoi(str2));
	printf("str: %s | ft_atoi: %d\n", str3, ft_atoi(str3));
	printf("str: %s | ft_atoi: %d\n", str4, ft_atoi(str4));	
	printf("str: %s | ft_atoi: %d\n", str5, ft_atoi(str5));	
	printf("str: %6s | ft_atoi: %d\n", str6, ft_atoi(str6));	
	printf("str: %6s | ft_atoi: %d\n", str7, ft_atoi(str7));	
}