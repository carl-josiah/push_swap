/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:21:37 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/28 15:51:45 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_3(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->head->data;
	second = a->head->next->data;
	third = a->head->next->next->data;
	return (first < second && second < third);
}

void	swap_and_reverse_rotate(t_stack *a)
{
	sa(a);
	rra(a);
}

void	swap_and_rotate(t_stack *a)
{
	sa(a);
	ra(a);
}

void	sort_3(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	if (!a->head || !a->head->next || !a->head->next->next)
		return ;
	first = a->head->data;
	second = a->head->next->data;
	third = a->head->next->next->data;
	if (is_sorted_3(a))
		return ;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
		swap_and_reverse_rotate(a);
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
		swap_and_rotate(a);
	else if (first < second && second > third && first > third)
		rra(a);
}
