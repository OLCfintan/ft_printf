/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:46:57 by oel-mouk          #+#    #+#             */
/*   Updated: 2023/12/28 03:02:03 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_temp(char a, va_list strings)
{
	int	temp;

	temp = 0;
	if (a == 's')
		temp = ft_putstr(va_arg(strings, char *));
	else if (a == 'c')
		temp = ft_putchar(va_arg(strings, int));
	else if (a == 'd' || a == 'i' || a == 'u')
	{
		temp = va_arg(strings, long int);
		temp = ft_putnbr(ft_pow(2, 32) * (a == 'u' && temp < 0) + temp);
	}
	else if (a == 'x' || a == 'X' || a == 'p')
		temp += ft_puthexa(va_arg(strings, long int), a);
	else
		temp = ft_putchar(a);
	return (temp);
}

int	ft_printf(char *tab, ...)
{
	int		temp;
	int		i;
	va_list	strings;

	temp = 0;
	i = 0;
	va_start(strings, tab);
	while (tab[i])
	{
		if (!tab[i] || (tab[i] == '%' && tab[i + 1] == '\0'))
			return -((tab[i] == '%' && tab[i + 1] == '\0')) + 0;
		else if (tab[i] == '%' && tab[i + 1] != '\0')
		{
			i++;
			temp += ft_temp(tab[i], strings);
		}
		else
			temp += ft_putchar(tab[i]);
		i++;
	}
	va_end(strings);
	return (temp);
}
