/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:57:31 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/12 18:04:40 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char const	*s;
	size_t				i;

	if (!dest || !src || !n)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char const *) src;
	if (dest > src)
	{
		while (n)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
