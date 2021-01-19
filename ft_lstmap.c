/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:15:09 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 16:00:24 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *newel;

	if (!lst || !f || !(newlst = ft_lstnew((*f)(lst->content))))
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (!(newel = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&newlst, newel);
	}
	return (newlst);
}
