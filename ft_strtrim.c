/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:22:16 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/12 16:39:44 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t			end_curs;
	unsigned int	start;

	start = 0;
	end_curs = ft_strlen(s1) - 1;
	while (ft_ischarset(s1[end_curs], set))
		end_curs--;
	while (ft_ischarset(s1[start], set))
		start++;
	res = malloc(sizeof(char) * (end_curs + 1));
	if (!res)
		return (NULL);
	res = ft_substr((const char *) s1, start, end_curs);
	return (res);
}
