/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:30:09 by rrask             #+#    #+#             */
/*   Updated: 2022/12/30 10:05:40 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	handle_c(int counter, char *s)
{
	ft_putchar_fd(*s, 1);
	counter++;
	return (counter);
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
			if (s[i] == 'c')
				handle_c(i, (char *)s);
		}
		i++;
	}
	va_end(args);
	return (1);
}
