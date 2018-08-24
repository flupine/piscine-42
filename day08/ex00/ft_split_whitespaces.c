/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 09:54:23 by falupine          #+#    #+#             */
/*   Updated: 2018/08/13 10:00:00 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str, int n)
{
	int i;

	i = n;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' &&
		str[i] != '\n')
		i++;
	return (i);
}

int		ft_size(char *str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t'
		|| str[i - 1] == '\n' || i == 0) &&
		(str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			size++;
		i++;
	}
	return (size + 1);
}

int		ft_spaces(char c)
{
	if (c != '\0' && c != ' ' && c != '\t' && c != '\n')
		return (1);
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	int		i[4];
	char	**tab;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	i[3] = 0;
	tab = malloc(sizeof(char*) * ft_size(str) + 1);
	while (str[i[0]] != '\0')
	{
		i[1] = 0;
		if ((str[i[0] - 1] == ' '
	|| str[i[0] - 1] == '\t' || str[i[0] - 1] == '\n' || i[0] == 0)
	&& (str[i[0]] != ' ' && str[i[0]] != '\t' && str[i[0]] != '\n'))
		{
			tab[i[2]] = malloc(sizeof(char) * ft_strlen(str, i[0]));
			i[3] = i[0];
			while (i[1] <= ft_strlen(str, i[0]) && ft_spaces(str[i[3]]) == 1)
				tab[i[2]][i[1]++] = str[i[3]++];
			tab[i[2]++][i[1]] = '\0';
		}
		i[0]++;
	}
	tab[i[2]] = 0;
	return (tab);
}
