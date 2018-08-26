/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:47:31 by exam              #+#    #+#             */
/*   Updated: 2018/08/17 19:13:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_lines(char *str, int i)
{
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		i++;
	if (str[i] == '\0')
		return (0);
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	expand_str(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0' && i <= ft_strlen(str))
	{
		if (str[i] == '\t' || str[i] == ' ')
		{
			if (is_lines(str, i) == 1)
			{
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(' ');
			}
			i++;
			while (str[i] == ' ' || str[i] == '\t')
				i++;
		}
		if (i <= ft_strlen(str) && str[i] != '\0')
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if ((argc - 1) != 1)
	{
		ft_putchar('\n');
		return (0);
	}
	expand_str(argv[1]);
	return (0);
}
