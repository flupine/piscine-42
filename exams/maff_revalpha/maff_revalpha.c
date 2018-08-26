/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 18:16:56 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 18:29:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_maj(char c)
{
	c -= 32;
	ft_putchar(c);
}

void	ft_alpha(void)
{
	int a;

	a = 'z';
	while (a >= 'a')
	{
		ft_putchar(a);
		a--;
		ft_maj(a);
		a--;
	}
}

int		main(void)
{
	ft_alpha();
	ft_putchar('\n');
	return (0);
}
