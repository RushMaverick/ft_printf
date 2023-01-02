/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:30:11 by rrask             #+#    #+#             */
/*   Updated: 2023/01/02 15:21:26 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr_print(int c, int i)
{
	if (c == -2147483648)
	{
		ft_putchar_print(i, '-');
		ft_putnbr_print(2, i);
		ft_putnbr_print(147483648, i);
	}
	else if (c < 0)
	{
		ft_putchar_print(i, '-');
		ft_putnbr_print(-c, i);
	}
	else if (c > 9)
	{
		ft_putnbr_print(c / 10, i);
		ft_putnbr_print(c % 10, i);
	}
	else
	{
		ft_putchar_print(i, c + '0');
	}
}
