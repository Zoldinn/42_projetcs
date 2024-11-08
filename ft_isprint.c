/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:39:54 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/08 10:59:47 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
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

	res = -296000;
	printf("test with : %d\nThat correspond to '%c'\n", res, (unsigned char) res);
	printf("ft_isprint : %d\n", ft_isprint((unsigned char) res));
	printf("isprint : %d\n", isprint((unsigned char) res));
	return (0);
}*/
