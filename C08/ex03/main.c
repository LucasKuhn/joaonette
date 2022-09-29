/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuhn <lkuhn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:56:59 by lkuhn             #+#    #+#             */
/*   Updated: 2022/09/28 16:00:02 by lkuhn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>
int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("point.x -> (%d)\n", point.x);
	printf("point.y -> (%d)\n", point.y);
	return (0);
}
