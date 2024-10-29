/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:29:19 by ajelloul          #+#    #+#             */
/*   Updated: 2024/10/01 11:56:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*st_node;
	t_list	*tmp;

	if (lst == NULL && del == NULL)
		return ;
	st_node = *lst;
	while (st_node)
	{
		tmp = st_node;
		st_node = st_node -> next;
		ft_lstdelone (tmp, del);
	}
	*lst = NULL;
}
