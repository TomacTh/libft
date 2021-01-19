/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:16:33 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 13:39:39 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	ptr = (malloc(sizeof(void) * (size * count)));
	if (!ptr)
		return (0);
	i = 0;
	while (i < (size * count))
	{
		((char*)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
