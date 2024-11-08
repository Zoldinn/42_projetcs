/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:43:20 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/08 17:48:37 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *) s;
	while (n)
	{
		n--;
		x[n] = (unsigned char) c;
	}
	return (s);
}

///////////////////

#include <stdio.h>
#include <string.h> // pour test vrai fonction
#include <limits.h> // pour tester les limites

void	ft_check(int c, size_t n)
{
	int	*tb1;
	int	*tb2;
	int	ok;

	tb1 = ft_calloc(n, sizeof(int));
	tb2 = ft_calloc(n, sizeof(int));
	ft_memset(tb1, c, n * sizeof(int));
	ft_memset(tb2, c, n * sizeof(int));
	ok = 1;
	while (n)
	{
		n--;
		if (tb1[n] != tb2[n])
		{
			printf("/!\\n> ft_memset : %d\n>memset : %d\n\n", tb1[n], tb2[n]);
			ok = 0;
			break;
		}
		printf("ft_memset : %d, memset : %d.\n", tb1[n], tb2[n]);
	}
	if (ok)
		printf("Everything : OK !\n");
	free(tb1);
	free(tb2);
	printf("\n----------------------------------\n");
}

void	ft_repeat(int *tb, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		printf("%d, ", tb[i++]);
	printf("\n");
}

int	main(void)
{
	// test pour n = 0;
	int	tb0[5] = {5, 5, 5, 5, 5};

	printf("TEST : size = 0\norigin : tab = ");
	ft_repeat(tb0, 5);
	ft_memset(tb0, 0, 3 * sizeof(int));
	printf("next : tab = ");
	ft_repeat(tb0, 5);
	printf("\n------------------------------------------------------------\n");
	// test limites
	ft_check(0, 3);
	ft_check(INT_MAX, 5);
	ft_check(INT_MIN, 5);
	printf("\n------------------------------------------------------------\n");
	// test normal
	ft_check(50, 10);
	return (0);
}
