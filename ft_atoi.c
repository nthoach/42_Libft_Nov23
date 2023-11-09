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
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	long	value;
	long	sign;

	value = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if ((unsigned long) __LONG_MAX__ < (unsigned long)value * 10
			+ (*str - '0') && sign == 1)
			return (-1);
		else if ((unsigned long) __LONG_MAX__ < (unsigned long)value * 10
			+ (*str - '0') && sign == -1)
			return (0);
		value = value * 10 + *str - '0';
		str++;
	}
	return (sign * value);
}

// int main()
// {
// 	char a[] = "	  +++--+-76543ffssf654";
//     printf("%d\n", ft_atoi(a));
//     printf("%d\n", atoi(a));
//      char b[] = "+++--+-76543ffssf654";
//     printf("%d\n", ft_atoi(b));
//     printf("%d\n", atoi(b));
//      char c[] = "     +76543ffssf654";
//     printf("%d\n", ft_atoi(c));
//     printf("%d\n", atoi(c));
//      char d[] = "2147483649";
//     printf("%d\n", ft_atoi(d));
//     printf("%d\n", atoi(d));
//          char e[] = "-2147483649";
//     printf("%d\n", ft_atoi(e));
//     printf("%d\n", atoi(e));
// }