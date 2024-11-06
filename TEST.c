/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TEST.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:24:04 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/06 10:49:06 by lefoffan         ###   ########.fr       */
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
	if (ac == 4)
	{
		printf("le mien : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
		printf("la vrai : %d\n", strncmp(av[1], av[2], atoi(av[3])));
		return (0);
	}
	ft_putstr("Error");
	return (1);
}
