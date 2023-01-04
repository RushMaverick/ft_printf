/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/01/04 14:43:06 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	format_handler(va_list args, const char *s)
{
	int	pr_len;

	pr_len = 0;
	if (*s == 'c')
		pr_len += handle_c(va_arg(args, int));
	if (*s == 's')
		pr_len += handle_s(va_arg(args, char *));
	if (*s == '%')
		pr_len += handle_c('%');
	if (*s == 'd' || *s == 'i')
		pr_len += handle_num(va_arg(args, int));
	if (*s == 'x' || *s == 'X')
		pr_len += handle_hex(va_arg(args, unsigned int), s);
	return (pr_len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		pr_len;
	va_list	args;

	i = 0;
	pr_len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			pr_len += format_handler(args, &s[i]);
			i++;
		}
		else if (s[i])
		{
			pr_len += ft_putchar_print(s[i]);
			i++;
		}
	}
	va_end(args);
	return (i);
}
