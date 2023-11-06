/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:42 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:43 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	size_t	n;
// 	int				comp;
// 	char str1[] = "123a";
// 	char str2[] = "123a";
// 	n = 4;
// 	comp = ft_strncmp(str1, str2, n);
// 	printf(" %d", comp);
// 	return (0);
// }