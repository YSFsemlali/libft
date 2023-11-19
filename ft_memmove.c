/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:18 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/19 15:14:38 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (d == NULL && s == NULL)
		return (0);
	if (s == d && len == 0)
		return (d);
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			printf("%c\n", d[len - 1]);
			printf("%c\n", s[len - 1]);
			len--;
		}
	}
	else if (d < s)
		ft_memcpy(d, s, len);
	return (dst);
}

// int main()
// {
// 	char s[] = "123456789";
// 	char *res = ft_memmove(s + 1, s, 8);
// 	printf("%s\n", res);
// 	return (0);
// }