/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:14:33 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/18 16:05:30 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *end;

	if (alst)
	{
		if (!*alst)
			*alst = new;
		else
		{
			end = ft_lstlast(*alst);
			end->next = new;
		}
	}
}
