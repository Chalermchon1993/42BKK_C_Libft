/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:58:05 by cwongsop          #+#    #+#             */
/*   Updated: 2022/03/05 14:33:19 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff;
	size_t			i;

	buff = (unsigned char *) s;
	i = 0;
	while (n > 0 && i < n)
	{
		if (*(buff + i) == (unsigned char) c)
			return (buff + i);
		i++;
	}
	return (NULL);
}
