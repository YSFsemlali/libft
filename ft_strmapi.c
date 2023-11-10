/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:25:57 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/09 18:49:19 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*result;

	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result[i] = '\0', result);
}

// #include <stdio.h>
// char to_upper(unsigned int i, char c) {
//    return ((i % 2 == 0) ? (char)ft_toupper(c) : c);
// }
// int main() {
//    char *s = "hello world";
//    char *upper = ft_strmapi(s, to_upper);
//    printf("%s\n", upper);
//    free(upper);
//    return (0);
// }