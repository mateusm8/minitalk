/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:53:34 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:13:26 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return ;
	while (i < num)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Hello World";
	
	ft_bzero(str, 5);
	printf("%s\n", str);
}*/
