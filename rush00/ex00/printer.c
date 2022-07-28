/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:30:13 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/09 21:42:04 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *printer takes a int [9][9] array for soduku and uses put_char to print 
 to standard output each row of the array. 
 */
//CHECK FOR CORRECT POINTER FORMAT

void	ft_putchar(char c);

void 	printer(int	***sudoku)
{
	int	row;
	int col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			ft_putchar(48 + sudoku[row][col]);
			col++;
		}
		col = 0;
		row++;
	}
}
