/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:14:44 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:14:32 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || num == 0)
		return (dest);
	if (d > s && d < s + num)
	{
		while (num-- > 0)
			d[num] = s[num];
	}
	else
	{
		while (i < num)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	str[] = "Hello World!";
	char	dst[50];

	printf("%p\n", ft_memmove(dst, str, 10));
}*/
