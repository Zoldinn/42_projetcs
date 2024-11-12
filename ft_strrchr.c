/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:45:43 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/12 11:10:52 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (s[len] != c)
	{
		if (s[len] == '\0' && c != '\0')
			return (NULL);
		len--;
	}
	return ((char *) s + len);
}

//////////////////// TEST
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*res;

	if (ac == 3)
	{
		res = ft_strrchr(av[1], (int) av[2][0]);
		if (res)
			printf("Found !\n%s\n", res);
		else
			printf("Not Found...\n%s\n", res);
		return (0);
	}
	printf("Error\n");
	return (1);
}*/
