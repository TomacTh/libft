/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:26:28 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 12:59:11 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *begin;

	if (!s1 || !s2 || !(str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	begin = str;
	while (*(char *)s1)
	{
		*str = *(char *)s1;
		s1++;
		str++;
	}
	while (*(char *)s2)
	{
		*str = *(char *)s2;
		s2++;
		str++;
	}
	*str = '\0';
	return (begin);
}
