/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:35:58 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/15 23:25:47 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "Hello World!";
// 	char *last = "Last";
// 	t_list *list = ft_lstnew(str);
// 	ft_lstadd_front(&list, ft_lstnew(str));
// 	ft_lstadd_front(&list, ft_lstnew(str));
// 	ft_lstadd_front(&list, ft_lstnew(str));
// 	ft_lstadd_back(&list, ft_lstnew(last));
// 	printf("%d\n", ft_lstsize(list));
// 	// using lstlast in new line 
// 	printf("%s\n", ft_lstlast(list)->content);
// 	return (0);
// }
