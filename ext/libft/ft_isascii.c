/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:31:48 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:13:41 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int		i;
	char	str[] = "Ñteste string1Ñ";

	i = 0;
	while (str[i])
	{
		if (ft_isascii(str[i]))
			printf("O caracter %d no indice %i e ascii \n", str[i], i);
		if (!ft_isascii(str[i]))
			printf("O caracter %d no indice %i nao e ascii \n", str[i], i);
		i++;
	}
}*/