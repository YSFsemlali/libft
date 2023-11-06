/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:46 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:24:47 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	ch;
	int		i;

	save = 0;
	i = 0;
	ch = c;
	while (1)
	{
		if (s[i] == ch)
			save = (char *)&s[i];
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (save);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     // Some test cases
//     char *s1 = "Hello world";
//     char *s2 = "Microsoft Bing";
//     char *s3 = "This is Bing";

//     // Test the function with different characters and strings
//     printf("ft_)ft_strrchr(s1, 'o') = %s\n", ft_strrchr(s1, 'd'));
// Expected output: o world
//     printf("ft_strrchr(s2, 'B') = %s\n", ft_strrchr(s2, 'B'));
// Expected output: Bing
//     printf("ft_strrchr(s3, 'z') = %s\n", ft_strrchr(s3, 'z'));
// Expected output: (null)
//     printf("ft_strrchr(s3, '\\0') = %s\n", ft_strrchr(s3, '\0'));
// Expected output: (empty string)

//     return (0);
// }