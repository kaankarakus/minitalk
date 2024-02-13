/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:24:42 by kkarakus          #+#    #+#             */
/*   Updated: 2024/02/06 11:27:25 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		digitcount;

	num = n;
	digitcount = 0;
	if (n < 0)
	{
		ft_putchar('-');
		num *= -1;
		digitcount++;
	}
	if (num > 9)
		digitcount += ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
	digitcount++;
	return (digitcount);
}

int	ft_putnbru(unsigned int n)
{
	unsigned long	num;
	int				digitcount;

	num = n;
	digitcount = 0;
	if (num > 9)
		digitcount += ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
	digitcount++;
	return (digitcount);
}

int	ft_putnbrhexl(unsigned int n)
{
	int	digitcount;

	digitcount = 0;
	if (n > 15)
	{
		digitcount += ft_putnbrhexl(n / 16);
		digitcount += ft_putnbrhexl(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n + 87);
		digitcount++;
	}
	return (digitcount);
}

int	ft_putnbrhexb(unsigned int n)
{
	int	digitcount;

	digitcount = 0;
	if (n > 15)
	{
		digitcount += ft_putnbrhexb(n / 16);
		digitcount += ft_putnbrhexb(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n + 55);
		digitcount++;
	}
	return (digitcount);
}

int	ft_putnbrhexllong(unsigned long n)
{
	int	digitcount;

	digitcount = 0;
	if (n > 15)
	{
		digitcount += ft_putnbrhexllong(n / 16);
		digitcount += ft_putnbrhexllong(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n + 87);
		digitcount++;
	}
	return (digitcount);
}
