/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:11:17 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/06 10:31:24 by lefoffan         ###   ########.fr       */
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
