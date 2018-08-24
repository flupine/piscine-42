/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:34:02 by falupine          #+#    #+#             */
/*   Updated: 2018/08/10 16:03:13 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_max(char **tab, char *sep)
{
	int		i;
	int		total;

	total = 0;
	i = 0;
	while (tab[i] != 0)
	{
		total += ft_strlen(tab[i]);
		total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_join(char **tab, char *sep)
{
	char	*res;
	int		i;
	int		n;
	int		b;

	b = 0;
	i = 0;
	n = 0;
	res = malloc(sizeof(char) * ft_max(tab, sep));
	while (tab[i] != 0)
	{
		while (tab[i][n] != '\0')
			res[b++] = tab[i][n++];
		i++;
		if (tab[i] == 0)
			return (res);
		n = 0;
		while (sep[n] != '\0')
			res[b++] = sep[n++];
		n = 0;
	}
	res[b] = '\0';
	return (res);
}
