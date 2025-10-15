/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:36:11 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:14:27 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	i = 0;
	if (num == 0)
		return (0);
	while (s1[i] == s2[i] && i < num - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	str1[] = "Hello world!";
	char	str2[] = "Hello World!";

	printf("%d\n", ft_memcmp(str1, str2, 10));
}*/