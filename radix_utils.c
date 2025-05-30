/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 22:55:42 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/30 23:17:42 by ccastro          ###   ########.fr       */
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

void	fill_array(t_list *node, int *arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		arr[i] = node->data;
		i++;
		node = node->next;
	}
}

void	sort_int_tab(int *tab, size_t size)
{
	size_t	i;
	size_t	j;
	int		temp;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1 - i))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	assign_pos(t_list *node, int *arr, size_t size)
{
	size_t	i;
	t_list	*curr;

	i = 0;
	curr = node;
	while (curr != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (arr[i] == curr->data)
				curr->pos = i;
			i++;
		}
		curr = curr->next;
	}
}

void	process_bit_pos(t_stack *a, t_stack *b, size_t size, int bit_pos)
{
	size_t	i;

	i = 0;
	while (i < size && a->head != NULL)
	{
		if ((a->head->pos >> bit_pos) & 1)
			ra(a);
		else
			pb(a, b);
		i++;
	}
}
