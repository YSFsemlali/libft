/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:29:09 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/07 18:42:27 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char	*ft_itoa(int nbr)
// {
// 	char	*str;
// 	long	num;
// 	int		len;

// 	num = nbr;
// 	if (nbr <= 0)
// 		len = 2;
// 	else
// 		len = 1;
// 	while (nbr)
// 	{
// 		nbr /= 10;
// 		len++;
// 	}
// 	str = (char *)malloc(sizeof(char) * len);
// 	if (!str)
// 		return (0);
// 	str[--len] = '\0';
// 	if (num < 0)
// 		str[0] = '-';
// 	else if (num == 0)
// 		str[0] = '0';
// 	while (num)
// 	{
// 		if (num < 0)
// 			str[--len] = -(num % 10) + '0';
// 		else
// 			str[--len] = (num % 10) + '0';
// 		num /= 10;
// 	}
// 	return (str);
// }
