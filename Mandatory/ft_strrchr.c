/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:40:28 by honguyen          #+#    #+#             */
/*   Updated: 2023/10/30 14:48:18 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	const char	*result;

	result = 0;
	while (*str)
	{
		if (*str == (char)c)
		{
			result = str;
		}
		str++;
	}
	result = (char *) result;
	return (result);
}
