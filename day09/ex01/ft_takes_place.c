/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 08:26:44 by falupine          #+#    #+#             */
/*   Updated: 2018/08/10 10:44:05 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_hour(int hour)
{
	int		res;
	char	*type;

	res = hour;
	type = "A.M";
	if (hour >= 12 && hour <= 24)
	{
		if (hour != 12)
			res = hour - 12;
	}
	return (res);
}

char	*ft_type(int hour)
{
	int		res;
	char	*type;

	res = hour;
	type = "A.M";
	if (res >= 12 && res <= 24)
	{
		if (hour != 12)
			res = hour - 12;
		if (hour == 24)
			type = "A.M";
		else
			type = "P.M";
	}
	return (type);
}

void	ft_takes_place(int hour)
{
	int		res;
	char	*type;

	res = hour;
	type = "A.M";
	if (hour >= 12 && hour <= 24)
	{
		if (hour != 12)
			res = hour - 12;
		if (hour == 24)
			type = "A.M";
		else
			type = "P.M";
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	printf(" %d.00 %s. AND %d.00 %s.\n",
	res, type, ft_hour(res + 1), ft_type(hour + 1));
}
