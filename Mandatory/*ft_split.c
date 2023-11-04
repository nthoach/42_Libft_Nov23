/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:07:15 by honguyen          #+#    #+#             */
/*   Updated: 2023/11/04 12:42:06 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	size_array(char *str, char *charset)
{
	int	ct_str;
	int	in_str;

	ct_str = 0;
	in_str = 0;
	while (*str)
	{
		if ((in_str == 0) && (check_sep(*str, charset) == 0) && *str)
		{
			in_str = 1;
			ct_str++;
		}
		if ((in_str == 1) && (check_sep(*str, charset) == 1) && *str)
			in_str = 0;
		str++;
	}
	return (ct_str);
}

int	size_str(char *str, int *k, char *charset)
{
	int	size;
	int	count;

	count = 0;
	size = 0;
	while (check_sep(*str, charset) == 1 && *str)
	{
		str++;
		count++;
	}
	*k = count;
	while (check_sep(*str, charset) == 0 && *str)
	{
		size++;
		str++;
	}
	return (size);
}

void	ft_strncpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src [i];
		i++;
	}
	dest[size] = '\0';
}

char	**ft_split(char const *str, char *charset)
{
	int		i;
	int		k;
	int		ar_sz;
	int		str_sz;
	char	**ptr;

	ar_sz = size_array(str, charset);
	ptr = (char **) malloc((ar_sz + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ar_sz && *str)
	{
		str_sz = size_str(str, &k, charset);
		ptr[i] = (char *) malloc((str_sz + 1) * sizeof(char));
		if (ptr[i] == NULL)
			return (NULL);
		str = str + k;
		ft_strncpy(ptr[i], str, str_sz);
		str = str + str_sz;
		i++;
	}
	ptr[ar_sz] = 0;
	return (ptr);
}
