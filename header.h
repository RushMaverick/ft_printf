/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:36:12 by rrask             #+#    #+#             */
/*   Updated: 2023/01/02 11:15:34 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
#include <stdarg.h>
#include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putstr_print(char *s, int fd, int i);
void	ft_putchar_fd(char c, int fd);
int		handle_s(int i, char *s);
int		handle_c(int i, char c);
int		handle_prcnt(int i, char c);

#endif