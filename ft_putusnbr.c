/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putusnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:09:44 by rrask             #+#    #+#             */
/*   Updated: 2023/01/05 15:27:25 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_putusnbr(unsigned int c)
{
	if (c < 0)
		ft_putusnbr(c);
	else if (c > 9)
	{
		ft_putusnbr(c / 10);
		ft_putusnbr(c % 10);
	}
	else
	{
		ft_putchar_print(c + '0');
	}
	return (c);
}
