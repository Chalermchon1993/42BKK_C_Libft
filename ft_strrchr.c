/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:26:13 by cwongsop          #+#    #+#             */
/*   Updated: 2022/02/28 03:45:24 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*buff;

	buff = (char *) s;
	i = ft_strlen(s) + 1;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return (buff + i);
		i--;
	}
	return (NULL);
}
