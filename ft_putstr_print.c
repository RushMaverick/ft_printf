/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:02:03 by rrask             #+#    #+#             */
/*   Updated: 2023/01/09 16:59:54 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_print(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (i);
	while (*s)
	{
		write(1, s, 1);
		i++;
		s++;
	}
	return (i);
}
