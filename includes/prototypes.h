/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 18:13:41 by dtai              #+#    #+#             */
/*   Updated: 2019/08/18 18:16:34 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

int		check_num(char **board, int row, int col, char i);
void	change_board(char **board, int row, int col);
int		print_func(char argv[10][9]);
int		check_given(char **board);
int		g_solutions;
char	g_answer[10][9];
#endif
