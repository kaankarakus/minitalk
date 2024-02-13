/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkarakus <kkarakus@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:47:05 by kkarakus          #+#    #+#             */
/*   Updated: 2024/02/12 13:17:49 by kkarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	send_signal(int pid, int c)
{
	int	bit;

	bit = 6;
	while (bit != -1)
	{
		if ((c >> bit) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(70);
		bit--;
	}
	return (0);
}

int	main(int argc, char	**argv)
{
	int		pid;
	char	*str;

	if (argc != 3)
	{
		ft_printf("exited with: %s\n", ERR_ARGUMENT);
		exit(1);
	}
	pid = ft_atoi(argv[1]);
	str = argv[2];
	while (*str)
		send_signal(pid, *str++);
	return (0);
}
