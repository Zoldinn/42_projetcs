/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TEST.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:24:04 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/06 17:26:49 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	char	*buffer;

	if (ac == 4)
	{
		buffer = malloc(sizeof(char) * (ft_strlen(av[1]) + ft_strlen(av[2]) + 1));
		if (!buffer)
			return (1);
		ft_memcpy(buffer, av[1], ft_strlen(av[1]) + 1);
		printf("Avant strlcat: %s\n", buffer);
		printf("%zu\n", strlcat(buffer, av[2], ft_strlen(av[1]) + ft_strlen(av[2]) + 1));
		printf("Après strlcat: %s\n", buffer);
		free(buffer);
		return (0);
	}
	ft_putstr("Error");
	return (1);
}
