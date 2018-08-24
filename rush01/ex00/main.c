/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 23:01:49 by falupine          #+#    #+#             */
/*   Updated: 2018/08/12 20:29:05 by marichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int		main(int argc, char **argv)
{
	int		**grille;

	if ((argc - 1) != 9)
	{
		ft_putstr("Error\n");
		return (0);
	}
	grille = ft_format(argv);
	if (ft_sudoku(grille, 0) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_print(grille);
	return (0);
}
