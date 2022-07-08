/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:13:17 by jijoo             #+#    #+#             */
/*   Updated: 2022/07/08 01:09:16 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int n, char c, int *l)
{
	unsigned int	u;
	int				ret;

	ret = 0;
	u = (unsigned int)n;
	if (u < 16)
	{
		if (c == 'x')
			ret = ft_putchar("0123456789abcdef"[u % 16], l);
		else
			ret = ft_putchar("0123456789ABCDEF"[u % 16], l);
		if (ret < 0)
			return (ret);
	}
	else if (u >= 16)
	{
		ft_puthex(u / 16, c, l);
		if (c == 'x')
			ret = ft_putchar("0123456789abcdef"[u % 16], l);
		else
			ret = ft_putchar("0123456789ABCDEF"[u % 16], l);
		u = u % 16;
	}
	return (ret);
}
