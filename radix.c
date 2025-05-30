/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 21:45:42 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/30 23:22:51 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack *a, t_stack *b, size_t size)
{
	int	max;
	int	passes;
	int	bit_pos;
	int	*arr;

	max = 0;
	if (!ps_lst_max(a->head, &max))
		return ;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return ;
	fill_array(a->head, arr, size);
	sort_int_tab(arr, size);
	assign_pos(a->head, arr, size);
	passes = count_bits(size - 1);
	bit_pos = 0;
	while (bit_pos < passes)
	{
		process_bit_pos(a, b, size, bit_pos);
		while (b->size > 0)
			pa(a, b);
		bit_pos++;
	}
	free(arr);
}
