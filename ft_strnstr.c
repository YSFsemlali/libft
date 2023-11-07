/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:44 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 19:06:51 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	len;
	char	c;
	char	sc;

	if (c == '\0')
		
	c = *find++;
	len = ft_strlen(find);
	sc = *s;
	while (slen > 0 && sc != '\0')
	{
		if (sc == c)
		{
			if (len > slen)
				return (NULL);
			if (ft_strncmp(s + 1, find, len) == 0)
				return ((char *)s);
		}
		s++;
		slen--;
	}
	return ((char *)s);
}

char	*strnstr(const char *s, const char *find, size_t slen)
{
	size_t	len;
	char	c;
	char	sc;

	if (c != '\0')
	{
		c = *find++;
		len = strlen(find);
		while (ft_strncmp(s, find, len) != 0)
		{
			while (sc != c);
			{
				if ((sc = *s++) == '\0' || slen-- < 1)
					return (NULL);
			} 
			if (len > slen)
				return (NULL);
		} 
		s--;
	}
	return ((char *)s);
}

// Main function to test your function
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