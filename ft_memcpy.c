/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:09:37 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 13:27:02 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *pdest;

	pdest = dst;
	if (!dst && !src)
		return (0);
	while (n--)
	{
		*pdest = *(unsigned char *)src;
		src++;
		pdest++;
	}
	return (dst);
}
