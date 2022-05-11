/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 01:00:11 by cwongsop          #+#    #+#             */
/*   Updated: 2022/02/26 04:21:57 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_str;
	char	*src_str;

	dst_str = (char *) dst;
	src_str = (char *) src;
	if (src_str < dst_str)
	{	
		while (len > 0)
		{
			dst_str[len - 1] = src_str[len - 1];
			len--;
		}
	}
	if (src_str > dst_str)
	{
		while (len > 0)
		{
			*(dst_str++) = *(src_str++);
			len--;
		}
	}
	return (dst);
}
