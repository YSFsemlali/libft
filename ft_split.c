/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:24:24 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/08 22:41:36 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	next_separator_found(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		while (str[i] && next_separator_found(sep, str[i]))
			i++;
		if (str[i] == '\0')
			break ;
		if (str[i] != '\0')
			x++;
		while (str[i] && !next_separator_found(sep, str[i]))
			i++;
	}
	return (x);
}

int	ft_word_len(char *sep, char *str)
{
	int	i;

	i = 0;
	while (str[i] && !next_separator_found(sep, str[i]))
		i++;
	return (i);
}

char	*copy_strings(char *sep, char *str)
{
	int		i;
	int		word_len;
	char	*word;

	i = 0;
	word_len = ft_word_len(sep, str);
	word = malloc(sizeof(char) * (word_len + 1));
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		word_count;
	char	**strings;

	i = 0;
	x = 0;
	word_count = count_words((char *)s, &c);
	strings = (char **)malloc(sizeof(char *) * word_count + 1);
	if (!strings)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] && next_separator_found(&c, s[i]))
			i++;
		if (s[i] != '\0')
		{
			strings[x] = copy_strings(&c, (char *)s + i);
			x++;
		}
		while (s[i] && !next_separator_found(&c, s[i]))
			i++;
	}
	strings[x] = 0;
	return (strings);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*input_string;
// 	char	separator_chars;
// 	char	**result;
// 	int		i;

// 	input_string = " hello world this is a test  ";
// 	separator_chars = ' ';
// 	i = 0;
// 	result = ft_split(input_string, separator_chars);
// 	while (result[i] != 0)
// 	{
// 		printf("[%s]", result[i]);
// 		i++;
// 	}
// 	printf("%s", result[i]);
// 	return (0);
// }
