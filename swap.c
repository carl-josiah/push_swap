/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:47:31 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 18:28:31 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_nodes(int *data_1, int *data_2)
{
	int	temp;

	temp = *data_1;
	*data_1 = *data_2;
	*data_2 = temp;
}

void	sa(t_stack *a)
{
	if (a->size < 2)
		return ;
	swap_nodes(&(a->head->data), &(a->head->next->data));
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	if (b->size < 2)
		return ;
	swap_nodes(&(b->head->data), &(b->head->next->data));
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	if (a->size < 2 || b->size < 2)
		return ;
	swap_nodes(&(a->head->data), &(a->head->next->data));
	swap_nodes(&(b->head->data), &(b->head->next->data));
	write(1, "ss\n", 3);
}
