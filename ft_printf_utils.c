/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:38:01 by rrask             #+#    #+#             */
/*   Updated: 2023/01/02 13:50:07 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	handle_c(int i, char c)
{
	write(1, &c, 1);
	i++;
	return (i);
}

int	handle_num(int c, int i)
{
	ft_putnbr_print(c, i);
	i++;
	return (i);
}

int	handle_s(int i, char *s)
{
	ft_putstr_print(i, s);
	return (i);
}