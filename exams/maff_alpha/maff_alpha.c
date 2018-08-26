/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 18:34:28 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 18:35:11 by exam             ###   ########.fr       */
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

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
		ft_maj(a);
		a++;
	}
}

int		main(void)
{
	ft_alpha();
	ft_putchar('\n');
	return (0);
}
