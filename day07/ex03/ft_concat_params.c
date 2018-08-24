/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 21:17:42 by falupine          #+#    #+#             */
/*   Updated: 2018/08/14 11:20:06 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int argc, char **argv)
{
	int i;
	int b;
	int size;

	size = 0;
	i = 1;
	b = 0;
	while (i < argc)
	{
		b = 0;
		while (argv[i][b] != '\0')
			b++;
		size += b;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*res;
	int		i;
	int		b;
	int		j;

	i = 1;
	b = 0;
	j = 0;
	res = malloc(sizeof(char) * ft_size(argc, argv));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			res[b] = argv[i][j];
			b++;
			j++;
		}
		res[b] = '\n';
		b++;
		i++;
	}
	res[b - 1] = '\0';
	return (res);
}
