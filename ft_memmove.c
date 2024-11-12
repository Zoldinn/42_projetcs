/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:57:31 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/12 11:23:01 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char const	*s;

	d = (unsigned char *) dest;
	s = (unsigned char const *) src;
	while (n)
	{
		n--;
		d[n] = s[n];
	}
	return (dest);
}
