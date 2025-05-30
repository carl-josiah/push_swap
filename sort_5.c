/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:57:42 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/30 16:02:22 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_elements_5(t_stack *a)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;
	t_list	*n5;

	n1 = a->head;
	n2 = a->head->next;
	n3 = a->head->next->next;
	n4 = a->head->next->next->next;
	n5 = a->head->next->next->next->next;
	return (n1 && n2 && n3 && n4 && n5 && !n5->next);
}

void	move_smallest_top_5(t_stack *a, size_t smallest_node_index)
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
	{
		rra(a);
		rra(a);
	}
	else if (smallest_node_index == 4)
		rra(a);
}

void	sort_5(t_stack *a, t_stack *b)
{
	t_list	*smallest_node;
	size_t	smallest_node_index;

	if (!is_elements_5(a))
		return ;
	smallest_node = find_smallest_node(a);
	smallest_node_index = find_smallest_node_index(a, smallest_node);
	move_smallest_top_5(a, smallest_node_index);
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
}
