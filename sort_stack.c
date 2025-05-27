/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:14:21 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 20:02:10 by ccastro          ###   ########.fr       */
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

int	sort_stack(t_list *list_of_num)
{
	t_stack	a;
	t_stack	b;

	init_stack(&a, &b, list_of_num);
	return (1);
}
