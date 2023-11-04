/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:57:04 by honguyen          #+#    #+#             */
/*   Updated: 2023/10/30 15:25:00 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int		k;
	size_t	to_find_len;

	to_find_len = ft_strlen(to_find);
	while (*str)
	{
		k = 0;
		while (to_find[k] && str[k] == to_find[k])
			k++;
		if (to_find[k] == '\0')
			return (str);
		str++;
	}
	return (0);
}
