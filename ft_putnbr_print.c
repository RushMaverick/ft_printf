/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:30:11 by rrask             #+#    #+#             */
/*   Updated: 2023/01/09 17:02:03 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_print(int c)
{
	int	pr_len;

	pr_len = 0;
	if (c == -2147483648)
	{
		ft_putchar_print('-');
		ft_putnbr_print(2);
		ft_putnbr_print(147483648);
	}
	else if (c < 0)
	{
		ft_putchar_print('-');
		ft_putnbr_print(-c);
	}
	else if (c > 9)
	{
		ft_putnbr_print(c / 10);
		ft_putnbr_print(c % 10);
	}
	else
	{
		ft_putchar_print(c + '0');
	}
	return (pr_len);
}
