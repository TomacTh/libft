/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharvet <tcharvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:38:20 by tcharvet          #+#    #+#             */
/*   Updated: 2021/01/18 15:38:29 by tcharvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while ((*(char*)str >= '\t' && *(char*)str <= '\r')
	|| *(char*)str == ' ')
		str++;
	if (*(char*)str == '+' || *(char*)str == '-')
	{
		if (*(char*)str == '-')
			sign = -1;
		str++;
	}
	while (*(char*)str >= '0' && *(char*)str <= '9')
	{
		num = num * 10 + (*(char*)str - '0');
		str++;
	}
	return (num * sign);
}
