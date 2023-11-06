/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:23:30 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:30:24 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

// #include <stdio.h>
// int main(void) {
//   // Allocate memory for an array of 10 integers
//   int *arr = calloc(10, sizeof(int));
//   int *arr2 = ft_calloc(10, sizeof(int));
//   // Check if the allocation was successful
//   if (arr == NULL) {
//     printf("Memory allocation failed\n");
//     return (1);
//   }
//   // Print the contents of the array
//   for (int i = 0; i < 10; i++) {
//     printf("%d:%d   ",arr[i], arr2[i]);
//   }
//   printf("\n");
//   // Free the memory
//   free(arr);
//   return (0);
// }