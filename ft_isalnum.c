/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:29:24 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/08 10:51:38 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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

	res = 48;
	printf("test with : %d\nThat correspond to '%c'\n", res, (unsigned char) res);
	printf("isalnum : %d\n", isalnum((unsigned char) res));
	printf("ft_isalnum : %d\n", ft_isalnum((unsigned char) res));
	return (0);
}*/
