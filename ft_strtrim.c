/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:22:16 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/13 14:57:53 by lefoffan         ###   ########.fr       */
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
	res = ft_substr((const char *) s1, start, end_curs);
	return (res);
}

/////////////////
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "aloha";
	char	set[] = "oa";
	char	*res;

	res = ft_strtrim(str, set);
	if (res)
		printf("%s\n", res);
	else
		printf("error\n");
	free(res);
	return (0);
}*/
