/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:28:52 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 13:00:21 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	char	*str;
	int		i;
	int		y;

	if (!set || !s1)
		return (0);
	i = 0;
	copy = (char*)s1;
	while (copy[i] && is_in_set(copy[i], set))
		i++;
	y = ft_strlen(s1) - 1;
	while (y > i && is_in_set(copy[y], set))
		y--;
	if (!(str = malloc(y - i + 2)))
		return (0);
	copy = str;
	while (i <= y)
	{
		*str = ((char *)s1)[i];
		str++;
		i++;
	}
	*str = '\0';
	return (copy);
}
