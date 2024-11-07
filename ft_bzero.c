/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:52:01 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/07 12:28:44 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n)
	{
		n--;
		(unsigned char) s[n] = 0;
	}
}

/////////////////////

#include <stdio.h>

int	main(void)
{
	int	tab[5];
	ft_bzero(tab, 5);
	printf("d\n", tab);
	return (0);
}
