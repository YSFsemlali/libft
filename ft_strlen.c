/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:04:59 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/12 22:50:34 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*str;

	str = (char *)s;
	if (!s)
		return (0);
	while (*str)
		str++;
	return (str - s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s = "hello world";
// 	int i = ft_strlen(s);
// 	int b = ft_strlen(s);
// 	int c = ft_strlen(((void *)0));
// 	printf(" %d   ,   %d   ,%d  ", i, b, c);
// }