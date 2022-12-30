/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:30:09 by rrask             #+#    #+#             */
/*   Updated: 2022/12/30 13:46:31 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	handle_c(int i, char c)
{
	write(1, &c, 1);
	i++;
	return (i);
}

static int	handle_s(int i, char *s)
{
	ft_putstr_print(s, 1, i);
	return (i);
}

static int	format_handler(va_list args, int i, const char *s)
{
	if (*s == 'c')
		handle_c(i, va_arg(args, int));
	if (*s == 's')
		handle_s(i, va_arg(args, char *));
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
		if(s[i])
		{
			ft_putchar_fd(s[i], 1);
			i++;	
		}
	}
	va_end(args);
	return (i);
}
