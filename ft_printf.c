/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/01/02 15:46:50 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	format_handler(va_list args, int i, const char *s)
{
	if (*s == 'c')
		handle_c(i, va_arg(args, int));
	if (*s == 's')
		handle_s(i, va_arg(args, char *));
	if (*s == '%')
		handle_c(i, '%');
	if (*s == 'd' || *s == 'i')
		handle_num(va_arg(args, int), i);
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
			ft_putchar_print(1, s[i]);
			i++;
		}
	}
	va_end(args);
	return (i);
}
