/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 16:31:32 by falupine          #+#    #+#             */
/*   Updated: 2018/08/14 13:39:23 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*s1;
	int		i;

	i = 0;
	s1 = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*size;
	int			i;

	i = 0;
	size = malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		size[i].size_param = ft_strlen(av[i]);
		size[i].str = &av[i][0];
		size[i].copy = &ft_strdup(av[i])[0];
		size[i].tab = &ft_split_whitespaces(av[i])[0];
		i++;
	}
	size[i].str = 0;
	return (size);
}
