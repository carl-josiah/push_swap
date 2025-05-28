/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_ascending.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:34:59 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/28 17:38:12 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_ascending(t_stack *a)
{
	t_list	*curr;

	curr = a->head;
	while (curr->next != NULL)
	{
		if (curr->data > curr->next->data)
			return (0);
		curr = curr->next;
	}
	return (1);
}
