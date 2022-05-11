/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:54:23 by cwongsop          #+#    #+#             */
/*   Updated: 2022/04/17 20:10:40 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// check given strings in 3 cases
// 1 no value
// 2 has value - no split
// 3 has value - need split
//

static int	ft_isvalid(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_count_spliter(char *s, char c)
{
	int	num_split;

	if (ft_isvalid((char *) s, c) == 0)
		return (0);
	num_split = 1;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != 0)
			num_split++;
		s++;
	}
	return (num_split);
}

static void	ft_freeall(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static int	ft_malloc_substr(char **str, int i, int j)
{
	str[i] = (char *) malloc((j + 1) * sizeof(char));
	if (!str[i])
	{
		ft_freeall(str, i);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		num_split;
	char	**str;

	num_split = ft_count_spliter((char *) s, c);
	str = (char **) malloc((num_split + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[num_split] = 0;
	i = 0;
	while (i < num_split)
	{
		while (*s == c)
			s++;
		j = 0;
		while (*s != c && *s != 0)
		{
			s++;
			j++;
		}
		if (ft_malloc_substr(str, i, j) == 0)
			return (NULL);
		ft_strlcpy(str[i], s - j, j + 1);
		i++;
	}
	return (str);
}
