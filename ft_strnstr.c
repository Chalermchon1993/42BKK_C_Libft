/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:35:26 by cwongsop          #+#    #+#             */
/*   Updated: 2022/03/05 20:01:11 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*dst;
	char	*src;
	size_t	i;
	size_t	src_len;

	dst = (char *) haystack;
	src = (char *) needle;
	if (ft_strlen(src) > len)
		src_len = len;
	else
		src_len = ft_strlen(src);
	if (*src == 0)
		return (dst);
	i = 0;
	while (dst[i] && src_len + i <= len && len > 0)
	{
		if (ft_strncmp(dst + i, src, src_len) == 0)
			return (dst + i);
		i++;
	}
	return (NULL);
}
