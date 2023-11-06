/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:34:21 by honguyen          #+#    #+#             */
/*   Updated: 2023/11/04 16:34:21 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static unsigned int	numberofdigits(int n)
{
	unsigned int	n_digits;
	unsigned int	n_positive;

	n_digits = 0;
	if (n < 0)
	{
		n_digits++;
		n_positive = -n;
	}
	else if (!n)
		n_digits = 1;
	else
		n_positive = n;

	while (n_positive)
	{
		n_positive = n_positive / 10;
		n_digits++;
	}		
	return (n_digits);
}
	
static char	*write_digits(char *str, int n, unsigned int len)
{
	unsigned int	n_positive;
	char	*s;
	
	s = str;
	if (n < 0)
	{
		s[0] = '-';
		n_positive = -n;
	}
	else if (n == 0)
	{
		s[0] = '0';
		return (str);
	}
	else
		n_positive = n;
	s[len] = '\0';
	while (n_positive)
	{
		s[len - 1] = n_positive % 10 + '0';
		n_positive = n_positive / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	unsigned int	len;
	// step1: count number of digits
	// step2: malloc string
	// step3: write digits to string
	len = numberofdigits(n);
	str = (char *)malloc((len + 1)* sizeof(char));
	if (!str)
		return (NULL);
	return(write_digits(str, n, len));	
}

int	main()
{
	char *str;
	
	str = ft_itoa(-1);
	printf("%s\n", str);
	free(str);
	return (0);
}