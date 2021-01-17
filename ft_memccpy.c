/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombanks <tombanks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:50:33 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/04 21:56:03 by tombanks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (*(unsigned char*)src && n-- > 0)
	{	
		*(unsigned char *)dest = *(unsigned char *)src;
		src++;
		dest++;
		if(*(unsigned char*)(src - 1) == (unsigned char)c)
			return (dest);
	}
	return (0);
}
