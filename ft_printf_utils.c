/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:38:01 by rrask             #+#    #+#             */
/*   Updated: 2023/01/03 11:34:07 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	handle_c(char c)
{
	write(1, &c, 1);
}

void	handle_num(int c)
{
	ft_putnbr_print(c);
}

void	handle_s(char *s)
{
	ft_putstr_print(s);
}
