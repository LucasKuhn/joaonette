/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuhn <lkuhn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:40:46 by lkuhn             #+#    #+#             */
/*   Updated: 2022/09/28 22:15:19 by lkuhn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("Number:   %d\n", 42);
	printf("Absolute: %d\n", ABS(42));
	printf("Number:   %d\n", 0);
	printf("Absolute: %d\n", ABS(0));
	printf("Number:  %ld\n", -2147483648);
	printf("Absolute: %ld\n", ABS(-2147483648));
	return (0);
}
