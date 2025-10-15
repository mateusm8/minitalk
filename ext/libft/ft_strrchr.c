/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:21:57 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 18:20:39 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if ((char)c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	if (j >= 0)
		return ((char *)&s[j]);
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Hello World";
	char	c;

	c = 'W';
	if (ft_strrchr(str, c))
		printf("%s\n", ft_strrchr(str, c));
	return (0);
}*/
