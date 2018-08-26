/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:46:21 by exam              #+#    #+#             */
/*   Updated: 2018/08/24 11:58:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_format(char *str)
{
	int i;
	int space;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
			i++;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		{
			space = 1;
			i++;
		}
		if (str[i] == '\0')
			return (0);
		if (space == 1)
			ft_putchar(' ');
		space = 0;
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if ((argc - 1) != 1)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_format(argv[1]);
	ft_putchar('\n');
	return (0);
}
