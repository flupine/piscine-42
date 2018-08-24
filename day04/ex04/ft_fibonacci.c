/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 19:56:34 by falupine          #+#    #+#             */
/*   Updated: 2018/08/02 21:48:11 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int	result;

	result = index;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (result);
}
