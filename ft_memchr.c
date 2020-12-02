/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombanks <tombanks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:45:56 by tcharvet          #+#    #+#             */
/*   Updated: 2020/12/02 14:27:05 by tombanks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while(n-- > 0)
	{
		if(*(char*)s == (unsigned char)c)
			return ((char*)s);
		s++;	
	}
	return (0);
}
