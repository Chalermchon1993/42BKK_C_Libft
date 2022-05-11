/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:40:52 by cwongsop          #+#    #+#             */
/*   Updated: 2022/02/28 15:50:13 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	s1_str = (unsigned char *) s1;
	s2_str = (unsigned char *) s2;
	if (n > 0)
	{
		i = 0;
		while (*s1_str && i < n)
		{
			if (*(s1_str + i) > *(s2_str + i))
				return (1);
			else if (*(s1_str + i) < *(s2_str + i))
				return (-1);
			i++;
		}
		if (ft_strlen(s1) < ft_strlen(s2))
			return (-1);
	}
	return (0);
}
