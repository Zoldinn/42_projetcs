/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <lefoffan@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:39:29 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/15 17:53:20 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst->next == NULL)
	{
		(*del)(lst->content);
		free(lst);
		return ;
	}
	tmp = lst;
	lst = lst->next;
	(*del)(tmp->content);
	free(tmp);
}
