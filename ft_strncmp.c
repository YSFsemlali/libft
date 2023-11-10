/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:04:37 by lsemlali          #+#    #+#             */
/*   Updated: 2023/11/09 18:41:20 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	i = 0;
	if (n == 0)
		return (0);
	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	while (s01[i] && s02[i] && s01[i] == s02[i] && i < n - 1)
	{
		i++;
	}
	if (s01[i] - s02[i] > 0)
		return (1);
	if (s01[i] - s02[i] < 0)
		return (-1);
	return (0);
}

// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char *s1 = "\200";
// 	char *s2 = "\0";

// 	char *s11 = "omg1||||||||||||||||";
// 	char *s22 = "omg3";

// 	size_t size = 6;
// 	char comp = ft_strncmp(s11, s22, size);
// 	char comp2 = strncmp(s11, s22, size);
// 	printf(" %d", comp);
// 	printf(" %d", comp2);

// 	return (0);
// }