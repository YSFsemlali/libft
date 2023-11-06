/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:48 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:49 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {

//     char *result = malloc(len+1);
//     if (result == NULL) {
//         return (NULL);
//     }
//     char *res_scan = result;
//     char const *scan = s + start;

//     while ((size_t)(scan - s) < len && *scan != '\0') {
//         *res_scan++ = *scan++;
//     }

//     *res_scan = '\0';
//     return (result);
// }
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		str = malloc(1);
		str[0] = '\0';
		return (&str[0]);
	}
	if (len >= ft_strlen(s))
		str = malloc(ft_strlen(s) + 1);
	else
		str = malloc(len + 1);
	if (str == NULL)
		return (0);
	while (s[i] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
// int main()
// {
//     char *s = "Hello, World!";
//     char *substr = ft_substr(s, 7, 5);
//     printf("Substring: %s\n", substr);
//     free(substr);

//     substr = ft_substr(s, 7, 100);
//     printf("Substring: %s\n", substr);
//     free(substr);

//     substr = ft_substr(s, 4, 1);
//     printf("Substring: %s\n", substr);
//     free(substr);
// }