/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:44 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:44:07 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Your function definition here
char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	len;

	char c, sc;
	c = *find++;
	if (c == '\0') // If the find string is empty, return the original string
		return ((char *)s);
	len = ft_strlen(find);
	// Get the length of the remaining find string
	while (slen > 0 && (sc = *s) != '\0')
	// Loop until the end of the original string or the slen limit
	{
		if (sc == c) // If the first character matches
		{
			if (len > slen)
				// If the remaining find string is longer than the slen limit,
				return (NULL return (NULL));
			if (ft_strncmp(s + 1, find, len) == 0)
				return ((char *)s));
		}
		s++;    // Move to the next character
		slen--; // Decrease the slen limit
	}
	return (NULL); // If no match is found, return NULL
}

//Main function to test your function
// int main()
// {
//     // Some sample inputs and outputs
//     char *s = "Hello world";
//     char *find = "world";
//     size_t slen = 10;
//     char *result = strnstr(s, find, slen);
//     printf("Result: %s\n", result); // Result: world

//     s = "This is a test";
//     find = "is";
//     slen = 5;
//     result = strnstr(s, find, slen);
//     printf("Result: %s\n", result); // Result: is

//     s = "Another example";
//     find = "ple";
//     slen = 8;
//     result = strnstr(s, find, slen);
//     printf("Result: %s\n", result); // Result: NULL

//     return (0);
// }
