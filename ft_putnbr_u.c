/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:04:00 by jijoo             #+#    #+#             */
/*   Updated: 2022/07/06 02:39:24 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_div(unsigned int num, int p, int *l, int *ret)
{
	unsigned int		rest;
	char				c;

	if (p == 1)
	{
		rest = num % 10;
		c = rest + '0';
		*ret = write(1, &c, 1);
		*l = *l + 1;
	}
	else
	{
		num /= 10;
		put_div(num, p - 1, l, ret);
	}
}

int	ft_putnbr_u(unsigned int n, int *len)
{
	unsigned int	power;
	unsigned int	cp;
	int				ret;

	cp = n;
	power = 1;
	while (cp > 9)
	{
		cp /= 10;
		power++;
	}
	while (power)
	{
		put_div(n, power, len, &ret);
		if (ret < 0)
			return (ret);
		power--;
	}
	return (0);
}
