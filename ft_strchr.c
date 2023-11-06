/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:26 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:27 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    const char str[] = "www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = strchr(str, ch);

//    printf("String after |%c| is - |%s|\\n", ch, ret);

//    return(0);
// }
