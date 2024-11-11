/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:22:55 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/11 11:57:54 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TEST FT_MEMSET

#include "libft.h"
#include <stdio.h> // pour printf
#include <string.h> // pour test vrai fonction
#include <limits.h> // pour tester les limites

void	ft_check(int c, size_t n) // compare ma/vrai fonction
{
	int	*tb1;
	int	*tb2;
	int	ok; // bool -> 1 = OK / 0 = il y a une diff

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
			printf("/!\ THERE IS A DIFFERENCE ! /!\ \n> ft_memset : %d\n>memset : %d\n\n", tb1[n], tb2[n]);
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

void	ft_print_int(int *tb, size_t n) // pour afficher les int d'un int[]
{
	size_t	i;

	i = 0;
	while (i < n)
		printf("%d, ", tb[i++]);
	printf("\n");
}

int	main(void) // ACTUELLEMENT POUR FT_MEMSET !
{
	// TEST CAS LIMITES
	// test pour n = 0;
	int	tb0[5] = {5, 5, 5, 5, 5};

	printf("\n------------------------------------------------------------\n");
	printf("TEST 1 : \nsize = 0\norigin : tab = ");
	ft_print_int(tb0, 5);
	ft_memset(tb0, 0, 3 * sizeof(int));
	printf("next : tab = ");
	ft_print_int(tb0, 5);
	
	printf("\n------------------------------------------------------------\n");
	ft_check(0, 3);
	
	printf("\n------------------------------------------------------------\n");
	ft_check(INT_MAX, 5);
	
	printf("\n------------------------------------------------------------\n");
	printf(
	ft_check(INT_MIN, 5);
	
	printf("\n------------------------------------------------------------\n");
	
	// TEST NORMAL
	ft_check(50, 10);
	
	return (0);
}
