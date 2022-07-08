/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:49:36 by jijoo             #+#    #+#             */
/*   Updated: 2022/07/06 02:39:57 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int *len)
{
	long unsigned int	i;
	int					ret;

	ret = 0;
	i = 0;
	if (s == 0)
		ft_putstr("(null)", len);
	else
	{
		while (s[i])
		{
			ret = ft_putchar(s[i], len);
			if (ret < 0)
				return (ret);
			i++;
		}
	}
	return (ret);
}
