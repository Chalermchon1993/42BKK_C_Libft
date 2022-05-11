/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:24:46 by cwongsop          #+#    #+#             */
/*   Updated: 2022/02/26 00:59:40 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_str;
	char	*src_str;

	dst_str = (char *) dst;
	src_str = (char *) src;
	while (n > 0)
	{
		*(dst_str++) = *(src_str++);
		n--;
	}
	return (dst);
}
