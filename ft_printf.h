/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijoo <jijoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:24:50 by jijoo             #+#    #+#             */
/*   Updated: 2022/07/08 01:42:02 by jijoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char	*str, ...);
int	ft_putchar(char c, int *len);
int	ft_putstr(char *s, int *len);
int	ft_print_memory(void *addr, int *len);
int	ft_putnbr(int n, int *len);
int	ft_putnbr_u(unsigned int n, int *len);
int	ft_puthex(int n, char c, int *l);
#endif
