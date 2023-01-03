/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:36:12 by rrask             #+#    #+#             */
/*   Updated: 2023/01/03 11:37:30 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putstr_print(char *s);
void	ft_putchar_print(char c);
int		ft_strlen_print(const char *str);
void	ft_putnbr_print(int c);
void	handle_s(char *s);
void	handle_c(char c);
void	handle_num(int c);
void	handle_hex(int c);
void	handle_HEX(int c);

#endif