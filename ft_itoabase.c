/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:39:20 by rrask             #+#    #+#             */
/*   Updated: 2023/01/05 10:35:41 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	rev_buf(char buf[]) //reverse prints the string to the output
{
	int	i;

	i = ft_strlen(buf);
	while (i > 0)
	{
		write(1, &buf[i - 1], 1);
		i--;
	}
	return (ft_strlen(buf));
}

int	ft_itoabase(unsigned int var, const char *s)
{
	int		j;
	int		count;
	long	char_to_add;
	char	buf[16];

	j = 0;
	char_to_add = 0;
	if (var == 0)
		return (ft_putchar_print('0'));
	while (var != 0)
	{
		char_to_add = var % 16;
		if (char_to_add < 10)
			buf[j] = char_to_add + '0';
		else if (char_to_add >= 10 && *s == 'X')
			buf[j] = char_to_add + 55;
		else
			buf[j] = char_to_add + 87;
		var = var / 16;
		j++;
	}
	buf[j] = '\0';
	count = rev_buf(buf);
	return (count);
}
