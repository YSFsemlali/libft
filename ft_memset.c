/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:21 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:22 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n != 0)
	{
		*p++ = (unsigned char)c;
		--n;
	}
	return (s);
}

// int main()
// {
//     // Test case 1: Setting an integer array to -1
//     int arr[5];
//     ft_memset(arr, -1, sizeof(arr));
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Test case 2: Filling a struct with a non-zero value
//     struct {
//         int x;
//         char c;
//         double d;
//     } s;
//     ft_memset(&s, 0.1, sizeof(s));
//     printf("%d %c %f\n", s.x, s.c, s.d);

//     // Test case 3: Filling an array with a non-zero value
//     char str[123];
//     ft_memset(str, 'A', sizeof(str));
//     printf("%s\n", str);

//     // Test case 4: Typecasting void pointer
//     void *ptr = malloc(sizeof(int));
//     *(int *)ptr = 42;
//     printf("%d\n", *(int *)ptr);
//     free(ptr);

//     return (0);
// }