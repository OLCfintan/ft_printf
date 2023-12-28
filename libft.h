/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:24:30 by oel-mouk          #+#    #+#             */
/*   Updated: 2023/12/27 23:31:55 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int			ft_puthexa(long int x, char l);
long int	ft_pow(int a, int b);
int			ft_putnbr(long int n);
int			ft_putstr(char *s);
int			ft_putchar(char c);
int			ft_floor(double nb);
int			ft_printf(char *tab, ...);

double		ft_log10(double x);
#endif
