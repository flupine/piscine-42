/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:35:43 by falupine          #+#    #+#             */
/*   Updated: 2018/08/10 14:06:33 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (factory[i] != NULL)
	{
		while (factory[i][n] != NULL)
		{
			free(factory[i][n]);
			n++;
		}
		n = 0;
		free(factory[i]);
		i++;
	}
}
