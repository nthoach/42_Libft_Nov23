/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:53:57 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 16:53:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst && del)
	{
		while (*lst)
		{
			tmp = (*lst)->next;	
			del((*lst)->content);
			free(*lst);
			*lst = tmp;					
		}
	}
}

// void del(void *str)
// {
// 	char	*s;

// 	s = (char *)str;
// 	while (*s)
// 	{
// 		*s = '\0';
// 		s++;
// 	}
// }
	

//  int main()
// {
// 	t_list *lst = {ft_lstnew("okok")};
// 	t_list *new;
// 	char str[] = "kokoko";
	
// 	new = ft_lstnew(&str);
// 	printf("\n\n > the content of lst %s\n", (char *)lst->content);
// 	printf(" > the pointer of next %p\n", lst->next);
// 	printf(" > the pointer of new %p\n", new);
// 	ft_lstadd_back(&lst, new);
// 	ft_lstclear(&lst, del);
// 	printf(" > the content of lst %s\n", (char *)lst->content);
// 	printf(" > the pointer of next %p\n", lst->next);
// }