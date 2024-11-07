/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:11:17 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/07 12:07:24 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;

	if (!little)
		return ((char *) big);
	while (*big && len)
	{
		b = (char *) big;
		l = (char *) little;
		while ((*b == *l) && *b && *l && len)
		{
			b++;
			l++;
		}
		if (!*l)
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}

//////////////////// TEST

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("$s\n", ft_strrchr(av[1], av[2], (size_t) ft_atoi(av[3])));
		return (0);
	}
	printf("Error\n");
	return (1);
}
