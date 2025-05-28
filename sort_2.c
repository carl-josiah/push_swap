/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:54:33 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/28 15:56:41 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *a)
{
	int	first;
	int	second;

	if (!a->head || !a->head->next)
		return ;
	first = a->head->data;
	second = a->head->next->data;
	if (first < second)
		return ;
	else if (first > second)
		sa(a);
}
