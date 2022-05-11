/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:18:02 by cwongsop          #+#    #+#             */
/*   Updated: 2022/02/25 23:16:20 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	cha;

	str = (unsigned char *) b;
	cha = (unsigned char) c;
	while (len > 0)
	{
		*(str++) = cha;
		len--;
	}
	return (b);
}
