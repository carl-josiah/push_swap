/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:14:21 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/30 16:24:28 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack *a, t_stack *b, t_list *list_of_num)
{
	a->head = list_of_num;
	a->size = ps_lst_size(list_of_num);
	b->head = NULL;
	b->size = 0;
}
#include "test.h"
int	sort_stack(t_list *list_of_num)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a, &b, list_of_num);
	if (is_sorted_ascending(&a))
		return (1);
	if (a.size == 2)
		sort_2(&a);
	else if (a.size == 3)
		sort_3(&a);
	else if (a.size == 4)
		sort_4(&a, &b);
	else if (a.size == 5)
		sort_5(&a, &b);
	else if (a.size > 5)
		radix(&a, &b, a.size);
	test_print_list(a.head);
	free_list(&(a.head));
	return (1);
}
