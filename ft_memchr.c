/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:09 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:10 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const void *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // Sample inputs
//     const char str[] = "Hello, world!";
//     const char ch = 'd';
//     size_t n = strlen(str);

//     // Call ft_memchr and print the result
//     char *ret = ft_memchr(str, ch, n);
//     char *ret2 = memchr(str, ch , n);
//     if (ret != NULL)
//     {
//         printf("Character '%c' found at position %ld\n", ch, ret - str);
//     }
//     else
//     {
//         printf("Character '%c' not found\n", ch);
//     }
//     if (ret2 != NULL)
//     {
//         printf("Character '%c' found at position %ld\n", ch, ret2 - str);
//     }
//     else
//     {
//         printf("Character '%c' not found\n", ch);
//     }

//     return (0);
// }
