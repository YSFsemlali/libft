/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:27:13 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 18:54:40 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && p1[i] == p2[i])
	{
		i++;
	}
	return (p1[i] - p2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Test cases
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, World!";
//     char str3[] = "Hello, World";
//     char str4[] = "Hello";
//     char str5[] = "World";

//     // Test case 1: Equal strings
//     int result1 = ft_memcmp(str1, str2, strlen(str1));
//     printf("Result 1: %d (Expect 0)\n", result1);

//     // Test case 2: Different lengths, one is a prefix of the other
//     int result2 = ft_memcmp(str4, str1, strlen(str4));
//     printf("Result 2: %d (Expect 0)\n", result2);

//     // Test case 3: Different last characters
//     int result3 = ft_memcmp(str1, str3, strlen(str1));
//     printf("Result 3: %d (Expect 33)\n", result3);

//     // Test case 4: Different strings
//     int result4 = ft_memcmp(str4, str5, strlen(str4));
//     printf("Result 4: %d (Expect -15)\n", result4);

//     // Test case 5: Compare first 5 characters only
//     int result5 = ft_memcmp(str1, str3, 5);
//     printf("Result 5: %d (Expect 0)\n", result5);

//     return (0);
// }
