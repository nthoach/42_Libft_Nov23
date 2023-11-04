/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:57:36 by nthoach           #+#    #+#             */
/*   Updated: 2023/11/03 17:57:36 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *d, const void *s, size_t len)
{
	const char	*src;
	char		*dst;

	src = (const char *) s;
	dst = (char *) d;
	if (!dst && !src)
		return (0);
	if (dst != src)
	{
		if (dst > src && dst < src + len)
		{
			src += len - 1;
			dst += len - 1;
			while (len--)
				*dst-- = *src--;
		}
		else
			while (len--)
				*dst++ = *src++;
	}
	return (d);
}
