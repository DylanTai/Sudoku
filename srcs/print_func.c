/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esulliva <esulliva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:11:24 by esulliva          #+#    #+#             */
/*   Updated: 2020/01/16 12:06:30 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_func(char argv[10][9])
{
	int counter_1;
	int counter_2;

	counter_1 = 1;
	while (counter_1 <= 9)
	{
		counter_2 = 0;
		while (counter_2 < 9)
		{
			ft_putchar(argv[counter_1][counter_2]);
			if (counter_2 != 8)
				ft_putchar(32);
			counter_2++;
		}
		ft_putchar('\n');
		counter_1++;
	}
}
