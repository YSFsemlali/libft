/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:37 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/14 17:30:19 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// #include <stdio.h>
// int main() {
//    char src[] = "Welcome Home";
//    char dest[13];
//    size_t copy = ft_strlcpy(dest, src, sizeof(dest));

//    printf("to copy: %zu\n", copy);
//    printf( "\n copies : %s", dest);
//    printf( "\n size of dest: %zu", sizeof(dest));

//    return (0);
// }