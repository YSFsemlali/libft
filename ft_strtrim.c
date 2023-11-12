/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:53 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/12 18:14:55 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	next_set_found(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	front_trim(char *s, char *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (next_set_found(set, s[i]))
			i++;
		else
			break ;
	}
	return (i);
}

int	end_trim(char *s, char *set)
{
	int	i;

	i = (ft_strlen(s) - 1);
	while (i >= 0)
	{
		if (next_set_found(set, s[i]))
			i--;
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		end;
	char	*result;
	int		i;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	front = front_trim((char *)s1, (char *)set);
	end = end_trim((char *)s1, (char *)set);
	if (end < front)
	{
		result = (char *)malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc((end - front) + 2);
	if (result == NULL)
		return (NULL);
	while (front <= end)
		result[i++] = s1[front++];
	return (result[i] = '\0', result);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc != 3)
// 	{
// 		printf("Usage: %s <input_string> <set_to_trim>\n", argv[0]);
// 		return (1);
// 	}

// 	char *input_string = argv[1];
// 	char *set_to_trim = argv[2];

// 	char *trimmed_string = ft_strtrim(input_string, set_to_trim);

// 	if (trimmed_string != NULL)
// 	{
// 		printf("Trimmed string: %s\n", trimmed_string);
// 		free(trimmed_string);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return (0);
// }