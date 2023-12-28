/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mouk <oel-mouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 02:16:00 by oel-mouk          #+#    #+#             */
/*   Updated: 2023/12/28 02:16:00 by oel-mouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(long int n)
{
	int			temp;
	long int	nb;

	nb = n;
	temp = 0;
	if (nb <= -1)
	{
		nb *= -1;
		ft_putchar('-');
		temp += 1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return (ft_floor(ft_log10(nb) + 1) + temp);
}
