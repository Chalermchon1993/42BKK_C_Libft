/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:23:51 by cwongsop          #+#    #+#             */
/*   Updated: 2022/03/11 23:47:08 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findstart(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		while (s1[i] == s2[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	return (i);
}

static int	ft_findend(char *s1, char *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (s2[j])
	{
		while (s1[i] == s2[j])
		{
			i--;
			j = 0;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;

	start = ft_findstart((char *) s1, (char *) set);
	len = ft_findend((char *) s1, (char *) set) - start + 1;
	return (ft_substr((char *) s1, start, len));
}
