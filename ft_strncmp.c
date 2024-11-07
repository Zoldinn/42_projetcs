/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:49:55 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/07 12:11:55 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && (*s1 == *s2) && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

//////////////////// TEST

#include <stdio.h>

int	main(int ac, char **av)
{
	int		res;
	size_t	size;

	if (ac == 4)
	{
		size = (size_t) ft_atoi(av[3]);
		res = ft_strncmp((const char *) av[1], (const char *) av[2], size);
		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	return (1);
}
