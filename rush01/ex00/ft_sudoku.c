/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 23:09:06 by falupine          #+#    #+#             */
/*   Updated: 2018/08/12 10:21:47 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int		**ft_format(char **argv)
{
	int		**tab;
	int		i;
	int		n;

	n = 0;
	i = 1;
	tab = malloc(sizeof(int *) * 9);
	while (i <= 9)
	{
		tab[i - 1] = malloc(sizeof(int) * 9);
		n = 0;
		while (n <= 9)
		{
			if (argv[i][n] == '.')
				argv[i][n] = '0';
			tab[i - 1][n] = argv[i][n] - 48;
			n++;
		}
		i++;
	}
	tab[i - 1] = 0;
	return (tab);
}

void	ft_print(int **argv)
{
	int		i;
	int		n;

	n = 0;
	i = 0;
	while (i < 9)
	{
		n = 0;
		while (n < 9)
		{
			ft_putnbr(argv[i][n]);
			n++;
			if (n != 9)
				ft_putchar(' ');
		}
		i++;
		ft_putstr("\n");
	}
	ft_free(argv);
}

int		ft_sudoku(int **grille, int position)
{
	int i;
	int j;
	int k;

	k = 1;
	i = position / 9;
	j = position % 9;
	if (position == 9 * 9)
		return (1);
	if (grille[i][j] != 0)
		return (ft_sudoku(grille, position + 1));
	while (k <= 9)
	{
		if (ft_online(k, grille, i) && ft_oncol(k, grille, j) &&
			ft_onblock(k, grille, i, j))
		{
			grille[i][j] = k;
			if (ft_sudoku(grille, position + 1))
				return (1);
		}
		k++;
	}
	grille[i][j] = 0;
	return (0);
}
