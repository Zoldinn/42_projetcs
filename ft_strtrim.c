/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:22:16 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/11 15:22:16 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lifbt.h"

static int	ft_ischarset(const char x, const char *set)
{
	while (*set)
	{
		if (x == *set && *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	size_t			endCurs;
	unsigned int	start;

	start = 0;
	endCurs = ft_strlen(s1) - 1;
	while (ft_ischarset(s1[endCurs], set))
		endCurs--;
	while (ft_ischarset(s1[start], set))
		start++;
	res = malloc(sizeof(char) * (endCurs + 1));
	if (!res)
		return (NULL);
	res = ft_substr((const char *) s1, start, endCurs);
	return (res);
}
