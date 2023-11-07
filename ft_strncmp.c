/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:42 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 18:15:00 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n != 0)
	{
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)--s2);
		if (*s1++ == 0)
			break ;
	}
	return (0);
}

// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char *s2 = "\x12\x02";
// 	size_t size = 6;
// 	char comp = ft_strncmp(s1, s2, size);
// 	char comp2 = strncmp(s1, s2, size);
// 	printf(" %d", comp);
// 	printf(" %d", comp2);

// 	return (0);
// }