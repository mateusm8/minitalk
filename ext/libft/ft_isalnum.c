/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:24:12 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:13:35 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
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
		if (ft_isalnum(str[i]))
			printf("O caracter %d no indice %i e alnum \n", str[i], i);
		if (!ft_isalnum(str[i]))
			printf("O caracter %d no indice %i nao e alnum \n", str[i], i);
		i++;
	}
}*/
