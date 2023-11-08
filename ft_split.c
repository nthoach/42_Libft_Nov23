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

static int	check_sep(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	size_array(const char *str, char charset)
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

static int	size_str(const char *str, int *k, char charset)
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

static void	ft_strncpy(char *dest, const char *src, int sz_st)
{
	dest += sz_st;
	*dest = '\0';
	dest--;
	src += sz_st - 1;
	while (sz_st)
	{
		*dest-- = *src--;
		sz_st--;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		ar_sz;
	int		str_sz;
	char	**ptr;

	ar_sz = size_array(s, c);
	ptr = (char **) malloc((ar_sz + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ar_sz && *s)
	{
		str_sz = size_str(s, &k, c);
		;
		if (!(ptr[i] = (char *) malloc((str_sz + 1) * sizeof(char))))
			return (NULL);
		s = s + k;
		ft_strncpy(ptr[i], s, str_sz);
		s = s + str_sz;
		i++;
	}
	ptr[ar_sz] = 0;
	return (ptr);
}

// int main() 
// {
//     const char *inputString = "This Mac Mini features a 5nm Apple"
//     "M2 Pro 64-bit SoC processor with 10 cores (4 performance cores,"
//     " 4 efficiency cores) clocked at 3.49 GHz.";
//     char **tokens = ft_split(inputString, ' ');

//     for (int i = 0; tokens[i] != NULL; i++) {
//         printf("Token %d: %s\n", i, tokens[i]);
//         free(tokens[i]); // Free individual tokens
//     }
//     free(tokens); // Free the array of tokens
//     return 0;
// }