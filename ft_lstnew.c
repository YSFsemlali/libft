/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:00:56 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/11 17:40:45 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	result->content = (void *)content;
	result->next = NULL;
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		*data;
	t_list	*node;
	t_list	*nullNode;
	t_list	*emptyNode;
	t_list	*largeNode;
	char	*str;

	// Test with a basic case
	data = NULL;
	node = ft_lstnew(&data);
	printf("Content: %d\n", *(int *)node->content);
		// Assuming the content is an int
	free(node);

	// Test with NULL content
	nullNode = ft_lstnew(NULL);
	if (nullNode->content == NULL)
		printf("NULL Content Test Passed\n");
	free(nullNode);

	// Test with empty content
	emptyNode = ft_lstnew("");
	if (emptyNode->content != NULL)
		printf("Empty Content Test Failed\n");
	free(emptyNode);

	// Test with large content
	str = malloc(sizeof(char) * 1000000);
	if (str == NULL)
		return (1);
	largeNode = ft_lstnew(str);
	if (largeNode->content == NULL)
		printf("Large Content Test Failed\n");
	free(largeNode->content);
	free(largeNode);
	free(str);

	return (0);
}
// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL.