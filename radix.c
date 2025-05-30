/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:31:58 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/30 15:57:21 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_bits(int num)
{
	int	bit_count;

	bit_count = 0;
	while (num >> bit_count)
		bit_count++;
	return (bit_count);
}

int	should_push_to_b(t_list *node, int bit_index)
{
	return (((node->data >> bit_index) & 1) == 0);
}

void	distribute_by_bit(t_stack *a, t_stack *b, int bit_index, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (should_push_to_b(a->head, bit_index))
			pb(a, b);
		else
			ra(a);
		i++;
	}
}

void	radix(t_stack *a, t_stack *b, size_t stack_a_size)
{
	int		max_num;
	int		bit_count;
	int		bit_index;
	size_t	stack_b_size;

	max_num = 0;
	bit_index = 0;
	if (!ps_lst_max(a->head, &max_num))
		return ;
	bit_count = count_bits(max_num);
	while (bit_index < bit_count)
	{
		distribute_by_bit(a, b, bit_index, stack_a_size);
		stack_b_size = ps_lst_size(b->head);
		while (stack_b_size > 0)
		{
			pa(a, b);
			stack_b_size--;
		}
		bit_index++;
	}
}
