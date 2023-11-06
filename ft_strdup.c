/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:29 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:41:47 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strdup(const char *str)
// {
// 	size_t	len;
// 	char	*copy;

// 	len = ft_strlen(str) + 1;
// 	if (!(copy = malloc(len)))
// 		return (NULL);
// 	ft_memcpy(copy, str, len);
// 	return (copy);
// }
char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(ft_strlen(s1) + 1);
	if (str == NULL)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     char *str1 = "Hello, world!";
//     char *str2 = "";
//     char *str3 = NULL;

//     char *dup = ft_strdup(str3);

//     printf("Original string 3: \"%s\"\n", str3);
//     printf("Duplicated string 3: \"%s\"\n", dup);

//     free(dup);

//     return (0);
// }