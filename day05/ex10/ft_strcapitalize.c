/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 16:19:57 by falupine          #+#    #+#             */
/*   Updated: 2018/08/05 12:45:24 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(char c)
{
	int res;

	res = 0;
	if (c >= 'a' && c <= 'z')
		res = 1;
	return (res);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	if (ft_isalpha(str[0]))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
				&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
