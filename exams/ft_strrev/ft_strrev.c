/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 18:38:14 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 19:15:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		min;
	int		max;
	char	swap;

	min = 0;
	max = 0;
	while (str[max] != '\0')
		max++;
	max -= 1;
	while (min < max)
	{
		swap = str[min];
		str[min] = str[max];
		str[max] = swap;
		max--;
		min++;
	}
	return (str);
}
