/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:23:03 by cwongsop          #+#    #+#             */
/*   Updated: 2022/03/10 11:34:03 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_dup;
	size_t	dst_size;

	dst_size = (ft_strlen(s1) + 1) * sizeof(char);
	s1_dup = (char *) malloc(dst_size);
	if (!s1_dup)
		return (NULL);
	ft_strlcpy(s1_dup, s1, dst_size);
	return (s1_dup);
}
