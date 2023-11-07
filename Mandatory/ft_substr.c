/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthoach <nthoach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:34:50 by honguyen          #+#    #+#             */
/*   Updated: 2023/11/07 23:56:55 by nthoach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) - 1 < start)
		return (ft_strdup(""));
	s = s + start;
	size = ft_strlen(s);
	if (size < len)
		len = size;
	string = (char *)malloc(sizeof(char) * (len + 1));
	ft_strlcpy(string, s, len + 1);
	return (string);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*sub_s;
// 	unsigned	int i;

// 	if (!s || !len || (size_t) start >= ft_strlen((char *)s))
// 	{
// 		sub_s = (char *)malloc(1 * sizeof(char));
// 		if (!sub_s)
// 			return (NULL);
// 		sub_s[0] = '\0';
// 		return (sub_s);
// 	}
// 	else
// 	{
// 		sub_s = (char *)malloc((len + 1) * sizeof(char));
// 		if (!sub_s)
// 			return (NULL);
// 		i = 0;
// 		while (*s && i < len)
// 		{
// 			sub_s[i] = s[start + i];
// 			i++;
// 		}
// 		sub_s[i] = '\0';
// 		return (sub_s);
// 	}
// }

// int main() 
// {
//     const char *inputString = "This is a sample string.";
//     unsigned int start = 8;
//     size_t length = 18;

//     char *substring = ft_substr(inputString, start, length);

//     if (substring) {
//         printf("Original String: \"%s\"\n", inputString);
//         printf("Start Index: %u\n", start);
//         printf("Length: %zu\n", length);
//         printf("Substring: \"%s\"\n", substring);
//         free(substring); // Don't forget to free the dynamically allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }