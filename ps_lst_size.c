/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:41:58 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 20:09:40 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ps_lst_size(t_list *head)
{
	size_t	i;
	t_list	*curr;

	i = 0;
	curr = head;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
