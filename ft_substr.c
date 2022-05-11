/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:39:12 by cwongsop          #+#    #+#             */
/*   Updated: 2022/03/10 18:24:41 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	str_size;

	if (ft_strlen(s + start) > len)
		str_size = len + 1;
	else
		str_size = ft_strlen(s + start) + 1;
	str = (char *) malloc(str_size * sizeof(char));
	if (!str)
		return (NULL);
	if (ft_strlen(s) < start)
		return (str);
	ft_strlcpy(str, s + start, str_size);
	return (str);
}
