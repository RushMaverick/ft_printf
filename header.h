/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:36:12 by rrask             #+#    #+#             */
/*   Updated: 2023/01/02 15:21:44 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
#include <stdarg.h>
#include <unistd.h>


int		ft_printf(const char *s, ...);
int		ft_putstr_print(int i, char *s);
int		ft_putchar_print(int i, char c);
void	ft_putnbr_print(int c, int i);
int		handle_s(int i, char *s);
int		handle_c(int i, char c);
int		handle_num(int i, int c);

#endif