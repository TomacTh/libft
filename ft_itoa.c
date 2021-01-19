/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:14:27 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/19 13:13:11 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			size(int n)
{
	int				size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static void			fill_str(char *str, int num, int length)
{
	unsigned int	n;

	n = num;
	if (num < 0)
		n = num * -1;
	if (n >= 10)
		fill_str(str, n / 10, length - 1);
	str[length] = '0' + n % 10;
}

char				*ft_itoa(int n)
{
	char			*str;
	int				length;

	length = size(n);
	if (!(str = malloc(length + 1)))
		return (0);
	str[length] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		fill_str(&str[1], n, length - 2);
	}
	else
		fill_str(str, n, length - 1);
	return (str);
}
