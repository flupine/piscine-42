/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:50:08 by falupine          #+#    #+#             */
/*   Updated: 2018/08/15 19:04:04 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	do_op(char *o1, char *op, char *o2)
{
	int res;

	res = 0;
	if (ft_strcmp(op, "+") == 0)
		res = ft_atoi(o1) + ft_atoi(o2);
	else if (ft_strcmp(op, "-") == 0)
		res = ft_atoi(o1) - ft_atoi(o2);
	else if (ft_strcmp(op, "*") == 0)
		res = ft_atoi(o1) * ft_atoi(o2);
	else if (ft_strcmp(op, "/") == 0)
		res = ft_atoi(o1) / ft_atoi(o2);
	else if (ft_strcmp(op, "%") == 0)
		res = ft_atoi(o1) % ft_atoi(o2);
	else
		res = 0;
	ft_putnbr(res);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_atoi(argv[3]) == 0 && ft_strcmp(argv[2], "/") == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (ft_atoi(argv[3]) == 0 && ft_strcmp(argv[2], "%") == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	do_op(argv[1], argv[2], argv[3]);
	return (0);
}
