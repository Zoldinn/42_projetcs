/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:52:17 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/12 18:01:44 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	x;

	if (c < 0 || c > 255)
		return (0);
	x = (unsigned char) c;
	if (x >= '0' && x <= '9')
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

	res = -5945;
	printf("test with : %d\nThat correspond to '%c'\n", res, (unsigned char) res);
	printf("ft_isdigit : %d\n", ft_isdigit((unsigned char) res));
	printf("isdigit : %d\n", isdigit((unsigned char) res));
	return (0);
}*/
