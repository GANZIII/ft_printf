/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:51:48 by jijoo             #+#    #+#             */
/*   Updated: 2022/07/08 01:18:28 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int *len)
{
	int	ret;

	ret = 0;
	if (n == -2147483648)
		ret = ft_putstr("-2147483648", len);
	else
	{
		if (n < 0)
		{
			ret = ft_putchar('-', len);
			n *= -1;
		}
		if (n >= 10)
		{
			ret = ft_putnbr(n / 10, len);
			n = n % 10;
		}
		if (n < 10)
		{
			ret = ft_putchar((n % 10) + 48, len);
			if (ret < 0)
				return (ret);
		}
	}
	return (ret);
}
