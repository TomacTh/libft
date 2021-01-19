/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:29:02 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 12:56:08 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	if (!(str = malloc(len + 1)) || !s)
		return (0);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (((char *)s)[start + i] && i < len)
		{
			str[i] = ((char *)s)[start + i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
