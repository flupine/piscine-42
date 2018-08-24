/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 20:14:37 by falupine          #+#    #+#             */
/*   Updated: 2018/08/13 15:11:22 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*total;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	total = malloc(sizeof(int) * (max - min - 1));
	while (min < max)
	{
		total[i] = min;
		min++;
		i++;
	}
	return (total);
}
