/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:34:41 by matmagal          #+#    #+#             */
/*   Updated: 2025/05/04 17:14:49 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_str(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_strndup(const char *str, int n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *) malloc((n + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[n] = '\0';
	return (ptr);
}

static void	ft_free(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**split_fill(const char *s, char **str, char c)
{
	int	index[3];

	index[0] = 0;
	index[2] = 0;
	while (s[index[0]])
	{
		while (s[index[0]] && s[index[0]] == c)
			index[0]++;
		index[1] = index[0];
		while (s[index[0]] && s[index[0]] != c)
			index[0]++;
		if (index[0] > index[1])
		{
			str[index[2]] = ft_strndup(&s[index[1]], index[0] - index[1]);
			if (str[index[2]] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
			index[2]++;
		}
	}
	str[index[2]] = NULL;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **) malloc((count_str(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	return (split_fill(s, str, c));
}

/*int	main(void)
{
	char	str[] = "eu,,vou,fazer,essa,porra";
	char 		**strs = ft_split(str, ',');
	int			i;

	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	ft_free(strs);
}*/
