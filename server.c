/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:47:25 by kkarakus          #+#    #+#             */
/*   Updated: 2024/02/12 13:18:46 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int signal)
{
	static char	c;
	static int	check_b = 0;

	if (signal == SIGUSR1)
		c = c | 1;
	check_b++;
	if (check_b == 7)
	{
		ft_printf("%c", c);
		c = 0;
		check_b = 0;
	}
	else
		c <<= 1;
}

int	main(void)
{
	ft_printf("procces_id -> %d", getpid());
	signal(SIGUSR1, ft_handler);
	signal(SIGUSR2, ft_handler);
	while (1)
		pause();
}
