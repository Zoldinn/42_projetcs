/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:11:17 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/06 08:23:43 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	int		check;

	if (!little)
		return (big);
	while (*big && len)
	{
		len--;
		b = big;
		l = little;
		while ((*b == *l) && *b && *l && len)
		{
			b++;
			l++;
		}
		if (!l)
			return ((char *) big);
		big++;
	}
	return (NULL);
}
