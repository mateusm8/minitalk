/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:14:19 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:13:38 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(void)
{
	int		i;
	char	str[] = "teste string1";

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
			printf("O caracter %d no indice %i e alpha \n", str[i], i);
		if (!ft_isalpha(str[i]))
			printf("O caracter %d no indice %i nao e alpha \n", str[i], i);
		i++;
	}
}*/
