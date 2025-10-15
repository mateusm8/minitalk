/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:01:39 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:13:51 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_putnbr(char *str, int n)
{
	long	nb;
	int		i;

	nb = n;
	i = count_digits(nb);
	str[i] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		i--;
		str[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *) malloc(count_digits(n) + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (ft_putnbr(str, n));
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(53523));
	return (0);
}*/
