/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manperez <manperez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:38:42 by manperez          #+#    #+#             */
/*   Updated: 2024/01/15 13:46:47 by manperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*ptr;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		ptr = (f)(lst->content);
		node = ft_lstnew(ptr);
		if (!node)
		{
			ft_lstclear(&new_list, del);
			free(ptr);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
