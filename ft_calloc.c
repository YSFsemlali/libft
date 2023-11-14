/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:23:30 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/14 16:08:01 by ysemlali         ###   ########.fr       */
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
// ft_calloc allocate memory and set it to zero.
// difference between malloc and calloc is that malloc
// will cause a heap-buffer-overflow if you don't 
// initialize the memory to zero.
