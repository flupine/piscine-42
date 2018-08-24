/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 20:51:23 by falupine          #+#    #+#             */
/*   Updated: 2018/08/07 21:15:10 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*total;

	i = 0;
	if (min >= max)
		return (0);
	total = malloc(sizeof(int) * (max - min) - 1);
	while (min < max)
	{
		total[i] = min;
		min++;
		i++;
	}
	*range = total;
	return (i);
}
