/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 01:13:14 by falupine          #+#    #+#             */
/*   Updated: 2018/08/12 10:28:19 by falupine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H
# define EON EOF
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_print(int **argv);
int		**ft_format(char **argv);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_intlen(int *nb);
int		ft_online(int n, int **grille, int i);
int		ft_oncol(int n, int **grille, int i);
int		ft_onblock(int n, int **grille, int i, int j);
int		ft_sudoku(int **grille, int pos);
int		ft_free(int **argv);
int		ft_errors(int **grille);
#endif
