/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:50:59 by dtai              #+#    #+#             */
/*   Updated: 2019/08/17 18:14:48 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototypes.h"

int			main(int argc, char **argv)
{
	g_solutions = 0;
	if (argc == 10 && check_given(argv))
	{
		change_board(argv, 1, 0);
		if (g_solutions == 1)
			print_func(g_answer);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
