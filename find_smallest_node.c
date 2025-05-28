/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:12:07 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/28 17:12:13 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_smallest_node(t_stack *a)
{
	t_list	*curr;
	t_list	*smallest;

	curr = a->head;
	smallest = curr;
	while (curr != NULL)
	{
		if (smallest->data > curr->data)
			smallest = curr;
		curr = curr->next;
	}
	return (smallest);
}
