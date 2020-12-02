/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombanks <tombanks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 20:37:41 by tcharvet          #+#    #+#             */
/*   Updated: 2020/12/01 20:20:10 by tombanks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_atoi(const char *nptr)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while ((*(char*)nptr >= '\t' && *(char*)nptr <= '\r')
	|| *(char*)nptr == ' ')
		nptr++;
	if (*(char*)nptr == '+' || *(char*)nptr == '-')
	{
		if (*(char*)nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*(char*)nptr >= '0' && *(char*)nptr <= '9')
	{
		num = num * 10 + (*(char*)nptr - '0');
		nptr++;
	}
	return (num * sign);
}
