/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:37:51 by falupine          #+#    #+#             */
/*   Updated: 2018/08/10 14:59:41 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD "Quarante-Deux"

typedef	struct	s_perso{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
