/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:50:56 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/07 17:26:01 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;

	if (!nmemb || !size)
		return (NULL);
	dst = malloc(size * nmemb);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, nmemb);
	return (dst);
}

///////////////////

#include "stdio.h"

int	main(void)
{
	int	*tab;
	int	i;
	
	i = 0;
	tab = calloc(5, sizeof(int));
	while (i < 5)
		printf("%d\n", tab[i++]);
	free(tab);
	return (0);
}
