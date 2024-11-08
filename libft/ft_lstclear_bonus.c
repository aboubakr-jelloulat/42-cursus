/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:11:20 by ajelloul          #+#    #+#             */
/*   Updated: 2024/11/05 11:37:55 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*st_node;
	t_list	*temp;

	if (!lst || !del)
	{
		return ;
	}
	st_node = *lst;
	while (st_node)
	{
		temp = st_node;
		st_node = st_node -> next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
