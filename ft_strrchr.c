/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:28:43 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 11:37:21 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = 0;
	while (*s)
	{
		if (*s == c)
			str = (char*)s;
		s++;
	}
	if (*s == c)
		return (char*)(s);
	if (str)
		return (str);
	return (0);
}
