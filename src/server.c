/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:10:00 by matmagal          #+#    #+#             */
/*   Updated: 2025/10/19 16:17:25 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signal)
{
	if (signal == SIGUSR1)
		fill_bits(0);
	else if (signal == SIGUSR2)
		fill_bits(1);
}

void	append_char(char **str, char c)
{
	char	*new;
	int		len;

	if (!*str)
		len = 0;
	else
		len = ft_strlen(*str);
	new = malloc(len + 2);
	if (!new)
		return ;
	if (*str)
	{
		ft_memcpy(new, *str, len);
		free(*str);
	}
	new[len] = c;
	new[len + 1] = '\0';
	*str = new;
}

void	fill_bits(int signal)
{
	static int	bit;
	static int	counter;
	char		c;
	static char	*mensagem;

	bit = (bit << 1) + signal;
	counter++;
	if (counter == 8)
	{
		c = bit;
		if (c == '\0')
		{
			ft_printf("%s\n", mensagem);
			free(mensagem);
			mensagem = NULL;
		}
		else
			append_char(&mensagem, c);
		bit = 0;
		counter = 0;
	}
}

int	main(void)
{
	ft_printf("My PID is %d\n", getpid());
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	return (0);
}
