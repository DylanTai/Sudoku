/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:05:13 by dtai              #+#    #+#             */
/*   Updated: 2019/08/18 15:56:42 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

int			check_false(char **board, int row, int col)
{
	if (board[row][col] != '.' &&
			!(board[row][col] >= '1' && board[row][col] <= '9'))
		return (1);
	if (row > 1 && col == 0 && board[row - 1][9] != '\0')
		return (1);
	if (board[9][9] != '\0')
		return (1);
	if (board[row][col] != '.')
	{
		change_board(board, row, col + 1);
		return (1);
	}
	return (0);
}

void		finish_board(char **board)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			g_answer[i][j] = board[i][j];
			j++;
		}
		i++;
	}
	g_solutions++;
}

void		change_board(char **board, int row, int col)
{
	char	i;

	if (col == 9)
	{
		row++;
		col = 0;
	}
	if (row == 10)
	{
		finish_board(board);
		return ;
	}
	if (check_false(board, row, col))
		return ;
	i = '0';
	while (++i <= '9')
	{
		if (check_num(board, row, col, i) && g_solutions < 2)
		{
			board[row][col] = i;
			change_board(board, row, col + 1);
			board[row][col] = '.';
		}
	}
}
