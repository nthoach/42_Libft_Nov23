/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:38:09 by nthoach           #+#    #+#             */
/*   Updated: 2023/11/03 18:38:09 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *p, int fd)
{
	if (!p)
		return ;
	while (*p)
	{
		write(fd, p, 1);
		p++;
	}
	write(fd, "\n", 1);
}
