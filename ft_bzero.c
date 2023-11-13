/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:33:40 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/13 23:33:43 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		ft_memset(p, 0, 1);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str = malloc(10);
// 	ft_bzero(str, 10);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }