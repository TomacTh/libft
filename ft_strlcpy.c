/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:44:12 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 12:54:40 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	if (!dst)
		return (0);
	i = 0;
	if (dstsize > 0)
	{
		while ((char)src[i] && i < dstsize - 1)
		{
			dst[i] = (char)src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
