/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:10:18 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/30 16:02:26 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_elements_4(t_stack *a)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;

	n1 = a->head;
	n2 = a->head->next;
	n3 = a->head->next->next;
	n4 = a->head->next->next->next;
	return (n1 && n2 && n3 && n4 && !n4->next);
}

void	move_smallest_top_4(t_stack *a, size_t smallest_node_index)
{
	if (smallest_node_index == 0)
		return ;
	else if (smallest_node_index == 1)
		sa(a);
	else if (smallest_node_index == 2)
	{
		ra(a);
		sa(a);
	}
	else if (smallest_node_index == 3)
		rra(a);
}

void	sort_4(t_stack *a, t_stack *b)
{
	t_list	*smallest_node;
	size_t	smallest_node_index;

	if (!is_elements_4(a))
		return ;
	smallest_node = find_smallest_node(a);
	smallest_node_index = find_smallest_node_index(a, smallest_node);
	move_smallest_top_4(a, smallest_node_index);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}
