/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:00:38 by falupine          #+#    #+#             */
/*   Updated: 2018/08/10 13:20:45 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]) == 1)
		{
			if ((str[i] >= 'k' && str[i] <= 'k' + 16) ||
				(str[i] >= 'K' && str[i] <= 'K' + 16))
				str[i] = str[i] - 10;
			else
				str[i] = str[i] + 16;
		}
		i++;
	}
	return (str);
}
