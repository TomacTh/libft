/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombanks <tombanks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:50:33 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 13:24:49 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		src++;
		dst++;
		if (*(unsigned char*)(src - 1) == (unsigned char)c)
			return (dst);
	}
	return (0);
}
