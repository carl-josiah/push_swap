/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:47:31 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 20:09:03 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_nodes(int *data1, int *data2)
{
	int	temp;

	temp = *data1;
	*data1 = *data2;
	*data2 = temp;
}

void	sa(t_stack *a)
{
	if (a->size < 2)
		return ;
	swap_nodes(&(a->head->data), &(a->head->next->data));
	write(1, "sa\n", 3);
}
