/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 10:10:31 by exam              #+#    #+#             */
/*   Updated: 2018/08/24 10:29:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if ((argc - 1) != 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while(argv[1][i] != '\0')
	{
		while (((argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		|| (argv[1][i] >= 'a' && argv[1][i] <= 'z')) && argv[1][i] != '\0')
		{
			if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				ft_putchar(argv[1][i] - 25);
			else
				ft_putchar(argv[1][i] + 1);
			i++;
		}
		if(argv[1][i] == '\0')
		{
			ft_putchar('\n');
			return (0);
		}
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
