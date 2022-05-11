/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:25:25 by cwongsop          #+#    #+#             */
/*   Updated: 2022/04/17 13:12:49 by cwongsop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char **s = ft_split("  tripolle  42  ", ' ');
	printf("user str[0]: %s\n", s[0]);
	printf("user str[1]: %s\n", s[1]);
	printf("user str[2]: %s\n", s[2]);
	return(0);
}
