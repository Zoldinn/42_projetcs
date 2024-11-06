/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TEST.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:24:04 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/06 08:29:46 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_putstr(ft_strnstr(av[1], av[2], ft_strlen(av[1])));
		write(1, "\n", 1);
	}
	ft_putstr("Error");
	return (1);
}
