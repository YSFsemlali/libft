/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:32 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:33 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*result;

	len = (ft_strlen(s1) + ft_strlen(s2));
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result = (char *)ft_memcpy(result, s1, ft_strlen(s1));
	len = ft_strlcat(result, (char *)s2, ft_strlen(s2));
	return (result);
}

// int main() {
//     char *s1 = "Hello";
//     char *s2 = "World";
//     char *s3 = "how";
//     char *s4 = "how";

//     // Test case 1: Normal strings
//     char *result1 = ft_strjoin(s1, s2);
//     printf("Result 1: %s\n", result1);
//     free(result1);

//     // Test case 2: First string is NULL
//     char *result2 = ft_strjoin(s3, s2);
//     printf("Result 2: %s\n", result2);
//     free(result2);

//     // Test case 3: Second string is NULL
//     char *result3 = ft_strjoin(s1, s3);
//     printf("Result 3: %s\n", result3);
//     free(result3);

//     // Test case 4: Both strings are NULL
//     char *result4 = ft_strjoin(s3, s3);
//     printf("Result 4: %s\n", result4);
//     free(result4);

//     // Test case 5: Empty strings
//     char *result5 = ft_strjoin(s4, s4);
//     printf("Result 5: %s\n", result5);
//     free(result5);

//     return (0);
// }
