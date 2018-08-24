/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 16:23:59 by falupine          #+#    #+#             */
/*   Updated: 2018/08/10 16:27:06 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_generic(void)
{
	char *str;

	str = "Tut tut ; Tut tut\n";
	write(1, str, ft_strlen(str));
}

int		main(void)
{
	ft_generic();
	return (0);
}
