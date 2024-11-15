/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <lefoffan@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:42:22 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/15 11:03:44 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

//---------- test ---------- //

#include <stdio.h>

int	main(void)
{
	t_list	*list[4];
	size_t	i;

	i = 0;
	while (i < 4)
	{
		list[i]->content = i;
		if (i + 1 <= 4)
			list[i]->next = &list[i + 1];
		else
			list[i]->next = NULL;
		i++;
	}
	printf("Last : %zu\n", ft_lstlast(*list)->content);
	return (0);
}