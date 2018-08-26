/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:04:45 by exam              #+#    #+#             */
/*   Updated: 2018/08/17 18:11:47 by exam             ###   ########.fr       */
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
	while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
		i++;
	while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		ft_putchar(argv[1][i++]);
	ft_putchar('\n');
	return (0);
}
