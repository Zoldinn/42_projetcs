/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TEST.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:24:04 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/06 12:12:41 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * (ft_strlen(av[1]) + 1));
	if (ac == 2)
	{
		printf("original : %s\n", (av[1]));
		ft_strlcpy(buffer, av[1], ft_strlen(av[1]) + 1);
		printf("la copy  : %s\n", buffer);
		free(buffer);
		return (0);
	}
	ft_putstr("Error");
	free(buffer);
	return (1);
}
