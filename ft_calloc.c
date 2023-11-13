/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:23:30 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/13 22:19:47 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	if (n == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, n * size);
	return (ptr);
}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	void *ptr1, *ptr2;

// 	ptr1 = ft_calloc(0, 0);
// 	ptr2 = calloc(0, 0);

// 	printf("ft_calloc: %p\n", ptr1);
// 	printf("calloc: %p\n", ptr2);

// 	free(ptr1);
// 	free(ptr2);
// 	void *str = ft_calloc(1, 1);

// 	if (str == NULL)
// 	{
// 		printf("Test failed\n");
// 		free(str);
// 		return (1);
// 	}
// 	else
// 	{
// 		printf("Test succeeded\n");
// 		free(str);
// 		return (0);
// 	}

// 	return (0);
// }