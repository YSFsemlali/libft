/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:23:40 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:23:41 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n != 0)
	{
		*p++ = 0;
		--n;
	}
}

// int	main(void)
// {
// 	char	str[100] = "Hello, world!";
// 	int		i;
// 	int		size;
// 	char	*p;

// 	// Test 1: Zero out the entire string
// 	ft_bzero(str, sizeof(str));
// 	size = sizeof(str);
// 	for (i = 0; i < size; i++)
// 	{
// 		if (str[i] != 0)
// 		{
// 			printf("Test 1 failed: str[%d] = %d\n", i, str[i]);
// 			return (EXIT_FAILURE);
// 		}
// 	}
// 	// Test 2: Zero out a portion of the string
// 	strcpy(str, "Hello, world!");
// 	ft_bzero(str + 7, 5);
// 	if (strcmp(str, "Hello,\0\0\0\0\0orld!") != 0)
// 	{
// 		printf("Test 2 failed: str = \"%s\"\n", str);
// 		return (EXIT_FAILURE);
// 	}
// 	// Test 3: Zero out zero bytes
// 	strcpy(str, "Hello, world!");
// 	ft_bzero(str, 0);
// 	if (strcmp(str, "Hello, world!") != 0)
// 	{
// 		printf("Test 3 failed: str = \"%s\"\n", str);
// 		return (EXIT_FAILURE);
// 	}
// 	// Test 4: Zero out a null pointer
// 	p = NULL;
// 	ft_bzero(p, sizeof(*p));
// 	printf("All tests passed!\n");
// 	return (EXIT_SUCCESS);
// }
