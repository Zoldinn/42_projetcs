/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:25:33 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/11 16:25:33 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(const char *s, char c)
{
	size_t	cw;

	cw = o;
	while (*s)
	{
		if (*s != c)
			cw++;
		while (*s != c && *s)
			s++;
		s++;
	}
	return (cw);
}

char	**ft_split(char const *s, char c)
{
	char				**split;
	unsigned int		i;
	unsigned int		j; // split index
	size_t				lenword;

	j = 0;
	split = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			lenword = i;
			while (s[lenword] != c && s[lenword])
				lenword++;
			split[j++] = ft_substr(s, i, lenword - 1);
		}
		while (s[i] != c && s[i])
			i++;
	}
	split[j] = NULL;
	return (split);
}
