/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:24:59 by kkarakus          #+#    #+#             */
/*   Updated: 2024/02/06 11:27:24 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "stdlib.h"

int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbru(unsigned int n);
int		ft_putnbrhexl(unsigned int n);
int		ft_putnbrhexb(unsigned int n);
int		ft_putnbrhexllong(unsigned long n);
int		ft_putnbrhexp(unsigned long n);
int		counter(int *a, int b);
void	ft_printfif(va_list *ap, int i, int *count, const char *a);
int		ft_printf(const char *a, ...);

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);

#endif
