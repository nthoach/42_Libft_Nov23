/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:21:48 by honguyen          #+#    #+#             */
/*   Updated: 2023/10/30 14:24:10 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char	*dest, char const	*src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	i;
	size_t	space;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size <= len_src)
	{
		dest[size - 1] = '\0';
		return (size - 1 + len_src);
	}
	else
	{
		space = size - len_dest - 1;
		i = 0;
		while (i < space && src[i])
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
		return (len_dest + len_src);
	}
}
