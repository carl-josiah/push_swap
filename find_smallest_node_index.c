/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest_node_index.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:12:40 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/28 17:12:48 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_smallest_node_index(t_stack *a, t_list *smallest_node)
{
	size_t	i;
	t_list	*curr;

	i = 0;
	curr = a->head;
	while (curr != NULL)
	{
		if (curr->data == smallest_node->data)
			return (i);
		i++;
		curr = curr->next;
	}
	return (i);
}
