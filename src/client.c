/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:09:56 by matmagal          #+#    #+#             */
/*   Updated: 2025/10/15 16:52:47 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit(int pid, char c)
{
	int	bit;
	int	counter;
	
	counter = 0;
	while (counter < 8)
	{
		bit = (c >> (7 - counter)) & 1;
		if (bit == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		counter++;
	}
}

void	send_char(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		send_bit(pid,  str[i]);
		i++;
	}
	send_bit(pid, '\0');
	free (str);
}

int	main(int ac, char **av)
{
	char	*str;
	
	if (ac == 3)
	{
		str = ft_strdup(av[2]);
		send_char(ft_atoi(av[1]), str);
	}
}
