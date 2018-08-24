/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 01:01:44 by falupine          #+#    #+#             */
/*   Updated: 2018/08/12 10:26:05 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int		ft_online(int n, int **grille, int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grille[i][j] == n)
			return (0);
		j++;
	}
	return (1);
}

int		ft_oncol(int n, int **grille, int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grille[i][j] == n)
			return (0);
		i++;
	}
	return (1);
}

int		ft_onblock(int n, int **grille, int i, int j)
{
	int k;
	int l;

	k = i - (i % 3);
	l = j - (j % 3);
	i = k;
	j = l;
	while (i < (k + 3))
	{
		while (j < (l + 3))
		{
			if (grille[i][j] == n)
				return (0);
			j++;
		}
		j = l;
		i++;
	}
	return (1);
}
