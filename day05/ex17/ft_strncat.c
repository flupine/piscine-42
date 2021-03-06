/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 12:24:34 by falupine          #+#    #+#             */
/*   Updated: 2018/08/06 14:08:47 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int b;

	b = 0;
	i = ft_strlen2(dest);
	while (i < nb && src[b])
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
