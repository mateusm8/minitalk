/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:33:34 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:13:47 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int		i;
	char	str[] = "teste \nstring1";

	i = 0;
	while (str[i])
	{
		if (ft_isprint(str[i]))
			printf("O caracter %d no indice %i e print \n", str[i], i);
		if (!ft_isprint(str[i]))
			printf("O caracter %d no indice %i nao e print \n", str[i], i);
		i++;
	}
}*/
