/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:36:12 by rrask             #+#    #+#             */
/*   Updated: 2023/01/05 15:27:23 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_putstr_print(char *s);
int		ft_putchar_print(char c);
int		ft_putnbr_print(int c);
int		handle_s(char *s);
int		handle_c(char c);
int		handle_num(int c);
int		handle_hex(unsigned int i, const char *s);
int		handle_unsign(int c);
int		ft_itoabase(unsigned int i, const char *s); 
int		ft_putusnbr(unsigned int c); 

#endif
