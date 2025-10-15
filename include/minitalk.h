/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:29:23 by matmagal          #+#    #+#             */
/*   Updated: 2025/10/15 17:00:07 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

# include "ft_printf.h"
# include "libft.h"

void	handler(int signal);
void	fill_bits(int signal);
void	send_char(int pid, char *str);
void	send_bit(int pid, char c);
void	append_char(char **str, char c);

#endif
