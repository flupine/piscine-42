/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 09:33:00 by falupine          #+#    #+#             */
/*   Updated: 2018/08/01 13:04:45 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	result;
	int i;
	int sous;

	sous = 0;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == 45)
		sous = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += ((int)str[i] - 48);
		i++;
	}
	if (sous == 1)
		return (-result);
	else
		return (result);
}
