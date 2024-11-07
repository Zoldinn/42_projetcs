/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:09:49 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/07 12:04:57 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	return (c - ('a' - 'A'));
}

////////// TEST 

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%c\n%c\n", av[1][0], (char) ft_toupper((int) av[1][0]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
