/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:01:51 by jijoo             #+#    #+#             */
/*   Updated: 2022/07/08 01:09:27 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthex_u(unsigned long a, int *len)
{
	int	ret;

	ret = 0;
	if (a < 16)
	{
		ret = ft_putchar("0123456789abcdef"[a % 16], len);
		if (ret < 0)
			return (ret);
	}
	else if (a >= 16)
	{
		puthex_u(a / 16, len);
		ret = ft_putchar("0123456789abcdef"[a % 16], len);
		a = a % 16;
	}
	return (ret);
}

int	ft_print_memory(void *addr, int *len)
{
	char	*str;
	int		ret;

	ret = 0;
	str = (char *)addr;
	ft_putstr("0x", len);
	puthex_u((unsigned long)str, len);
	return (ret);
}
