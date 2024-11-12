/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:45:01 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/12 17:59:49 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	x;

	if (c < 0 || c > 255)
		return (0);
	x = (unsigned char) c;
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
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

	res = 560000000;
	printf("test with : %d\nThat correspond to '%c'\n", res, (unsigned char) res);
	printf("ft_isalpha : %d\n", ft_isalpha((unsigned char) res));
	printf("isalpha : %d\n", isalpha((unsigned char) res));
	return (0);
}*/
