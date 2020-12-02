/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombanks <tombanks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:42:39 by tcharvet          #+#    #+#             */
/*   Updated: 2020/12/01 21:40:12 by tombanks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	if(!n)
		return (0);
	while (*(unsigned char*)s1 == *(unsigned char*)s2 &&
	*(unsigned char*)s1 && *(unsigned char*)s2 && --n > 0)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
