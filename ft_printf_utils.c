/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:38:01 by rrask             #+#    #+#             */
/*   Updated: 2023/01/05 15:08:41 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	handle_c(char c)
{
	int	pr_len;

	pr_len = 0;
	write(1, &c, 1);
	pr_len++;
	return (pr_len);
}

int	handle_num(int c)
{
	int	pr_len;

	pr_len = 0;
	ft_putnbr_print(c);
	return (pr_len);
}

int	handle_s(char *s)
{
	int	pr_len;

	pr_len = ft_putstr_print(s);
	return (pr_len);
}

int	handle_hex(unsigned int var, const char *s)
{
	int	pr_len;

	pr_len = ft_itoabase(var, s);
	return (pr_len);
}

int	handle_unsign(int c)
{
	int	pr_len;

	pr_len = ft_putusnbr(c);
	return (pr_len);
}
