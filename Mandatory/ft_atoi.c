/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:45:34 by nthoach           #+#    #+#             */
/*   Updated: 2023/11/03 15:45:34 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	long	value;
	long	sign;

	value = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <=13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if ((unsigned long) __LONG_MAX__ < (unsigned long) value * 10 +
		 *str - '0' && sign == 1)
		 	return (-1);
		else if ((unsigned long) __LONG_MAX__ < (unsigned long) value * 10 +
		 *str - '0' && sign == -1)
		 	return (0);
		value = value * 10 + *str - '0';
		str++;
	}
	return (sign * value);
}
