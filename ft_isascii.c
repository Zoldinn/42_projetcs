/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:38:08 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/08 10:57:50 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

////////////////////
/*
#include <stdio.h>
#include <ctype.h> // test la vrai fonction

int	main(void)
{
	int	res;

	res = -48;
	printf("test with : %d\nThat correspond to '%c'\n", res, (unsigned char) res);
	printf("ft_isacsii : %d\n", ft_isascii((unsigned char) res));
	printf("isascii : %d\n", isascii((unsigned char) res));
	return (0);
}*/
