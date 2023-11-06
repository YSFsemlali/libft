/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:35 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:36 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;
	size_t	d_len;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size == 0 || size <= d_len)
		return (s_len + size);
	while (src[i] && i < size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	p;
// 	size_t	j;

// 	j = 0;
// 	if (size == 0)
// 		return (ft_strlen(src));
// 	i = ft_strlen(dest);
// 	if (size <= i)
// 		return (size + ft_strlen(src));
// 	p = size - i - 1;
// 	while (src[j] != '\0' && j < p)
// 	{
// 		dest[j + i] = src[j];
// 		j++;
// 	}
// 	dest[i + j] = '\0';
// 	return (i + ft_strlen(src));
// }

// #include <stdio.h>
// int	main(void)
// {
// 	size_t	size;
// 	size_t	lcat;

// 	char dest[11] = "hello";
// 	char src[] = " world";
// 	size = 18;
// 	lcat = ft_strlcat(dest, src, size);
// 	printf(" %s\n", dest);
// 	printf(" %zu\n", lcat);
// 	return (0);
// }
