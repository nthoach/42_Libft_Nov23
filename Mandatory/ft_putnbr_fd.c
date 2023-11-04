/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:41:07 by nthoach           #+#    #+#             */
/*   Updated: 2023/11/03 18:41:07 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	pos_n;
	char	c;

	pos_n = n;
	if (pos_n < 0)
	{
		write(fd, "-", 1);
		pos_n = - pos_n;
	}
	if (pos_n < 10)
	{
		c = pos_n + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(pos_n/10, fd);
		
	}

}
