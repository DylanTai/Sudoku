/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:50:18 by dtai              #+#    #+#             */
/*   Updated: 2019/08/17 19:55:17 by dtai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_num_row(char **board, int row, int col, char i)
{
	int test_row;

	test_row = 1;
	while (test_row <= 9)
	{
		if (board[test_row][col] == i && row != test_row)
			return (0);
		test_row++;
	}
	return (1);
}

int	check_num_col(char **board, int row, int col, char i)
{
	int test_col;

	test_col = 0;
	while (test_col < 9)
	{
		if (board[row][test_col] == i && col != test_col)
			return (0);
		test_col++;
	}
	return (1);
}

int	check_num_box(char **board, int row, int col, char i)
{
	int test_row;
	int test_col;
	int itr_row;
	int itr_col;

	itr_row = 0;
	test_row = ((row - 1) / 3) * 3;
	while (itr_row < 3)
	{
		itr_col = 0;
		test_col = (col / 3) * 3;
		while (itr_col < 3)
		{
			if (test_row + 1 != row
					&& test_col != col
					&& board[test_row + 1][test_col] == i)
				return (0);
			itr_col++;
			test_col++;
		}
		itr_row++;
		test_row++;
	}
	return (1);
}

int	check_given(char **board)
{
	int row;
	int col;

	row = 1;
	while (row <= 9)
	{
		col = 0;
		while (col < 9)
		{
			if (board[row][col] >= '1' && board[row][col] <= '9' &&
					!(check_num_row(board, row, col, board[row][col])
					&& check_num_col(board, row, col, board[row][col])
					&& check_num_box(board, row, col, board[row][col])))
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int	check_num(char **board, int row, int col, char i)
{
	if (check_num_row(board, row, col, i)
			&& check_num_col(board, row, col, i)
			&& check_num_box(board, row, col, i))
		return (1);
	return (0);
}
