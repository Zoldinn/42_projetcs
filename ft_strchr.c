/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:38:09 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/07 12:04:34 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
		s++;
	if (!s)
		return (NULL);
	return ((char *) s);
}

//////////////////// TEST

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("$s\n", ft_strrchr(av[1], (int) av[2][0]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
