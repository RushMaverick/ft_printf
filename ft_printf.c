/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/01/03 11:38:20 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	format_handler(va_list args, int i, const char *s)
{
	if (*s == 'c')
		handle_c(va_arg(args, int));
	if (*s == 's')
		handle_s(va_arg(args, char *));
	if (*s == '%')
		handle_c('%');
	if (*s == 'd' || *s == 'i')
		handle_num(va_arg(args, int));
	if (*s == 'x')
		handle_hex(va_arg(args, int));
	if (*s == 'X')
		handle_HEX(va_arg(args, int));
	return (i);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			format_handler(args, i, &s[i]);
			i++;
		}
		else if (s[i])
		{
			ft_putchar_print(s[i]);
			i++;
		}
	}
	va_end(args);
	return (i);
}
