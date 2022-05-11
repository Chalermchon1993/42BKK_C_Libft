/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:48:53 by cwongsop          #+#    #+#             */
/*   Updated: 2022/02/28 02:03:39 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize > 0 && dst_len < dstsize)
	{
		i = 0;
		while (*dst)
		{
			dst++;
			i++;
		}
		while (*src && i++ < dstsize - 1)
			*dst++ = *src++;
		*dst = 0;
	}
	if (dst_len > dstsize)
		return (dstsize + src_len);
	else
		return (dst_len + src_len);
}
