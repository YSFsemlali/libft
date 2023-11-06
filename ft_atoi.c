/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:23:44 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 00:23:45 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	sign = 1;
	output = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		output *= 10;
		output += str[i] - '0';
		i++;
	}
	return (output * sign);
}

// #include <stdio.h>
// int main() {
//     char input[] = "\t \v \r \n \f  -100089000000000 ab567";
//     int result = ft_atoi(input);
//     int result2 = atoi(input);
//     printf(" %d \n %d \n", result, result2);
//     return (0);
// }
