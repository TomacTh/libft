/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:48:50 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 14:45:58 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t y;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && len-- > 0)
	{
		y = 0;
		while (haystack[i + y] == needle[y] && y <= len)
		{
			if (needle[y + 1] == '\0')
				return ((char*)&haystack[i]);
			y++;
		}
		i++;
	}
	return (0);
}
