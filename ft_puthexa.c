/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 02:15:57 by oel-mouk          #+#    #+#             */
/*   Updated: 2023/12/28 02:15:57 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_num(long int x, int nb)
{
	int	i;

	i = 0;
	while (x > 0)
	{
		i++;
		x /= nb;
	}
	return (i);
}

int	ft_puthexa(long int x, char l)
{
	long int	temp;
	char		*tab;
	int			i;

	if (l == 'p')
		ft_putstr("0x");
	temp = 0;
	i = ft_num(x, 16) + (x == 0);
	tab = (char *)malloc(i + 1);
	tab[i] = '\0';
	while (0 < i)
	{
		temp = x / 16;
		if (x - (temp * 16) >= 10)
			tab[--i] = (x - (temp * 16)) + 55 + 32 * (l != 'X');
		else
			tab[--i] = (x - (temp * 16)) + 48;
		x /= 16;
	}
	return (ft_putstr(tab) + 2 * (l == 'p'));
}
