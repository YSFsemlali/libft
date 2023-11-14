/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:35:58 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/14 21:07:44 by ysemlali         ###   ########.fr       */
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
// 	t_list *list = ft_lstnew(str);
// 	ft_lstadd_front(&list, ft_lstnew(str));
// 	ft_lstadd_front(&list, ft_lstnew(str));
// 	ft_lstadd_front(&list, ft_lstnew(str));
// 	printf("%d\n", ft_lstsize(list));
// 	return (0);
// }
