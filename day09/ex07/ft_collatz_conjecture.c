/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:49:46 by falupine          #+#    #+#             */
/*   Updated: 2018/08/10 14:06:57 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int nb;
	int i;

	nb = 1;
	i = 0;
	while (base != 1)
	{
		nb = ft_collatz_conjecture(1);
		if (base % 2 == 1 || i == 0)
			base = (base * 3) + 1;
		else
			base = (base / 2);
		i++;
	}
	return (i);
}
