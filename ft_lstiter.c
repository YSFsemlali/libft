/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:41:07 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/19 18:53:06 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char  *s = "hello world";
// 	t_list *lst = ft_lstnew(s);
// 	t_list *lst2 = ft_lstnew(s);
// 	ft_lstadd_back(&lst, lst2);
// 	ft_lstadd_back(&lst, ft_lstnew(s));
// }