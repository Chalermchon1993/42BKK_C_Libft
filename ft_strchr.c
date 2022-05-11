/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 02:36:17 by cwongsop          #+#    #+#             */
/*   Updated: 2022/02/28 03:17:56 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		check;
	char	*buff;

	buff = (char *) s;
	check = 1;
	while (check == 1)
	{
		if (*buff == 0)
			check = 0;
		if (*buff == (char) c)
			return (buff);
		buff++;
	}
	return (NULL);
}
