/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:47:53 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/29 18:53:30 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_lst_max(t_list *lst, int *max)
{
	t_list	*curr;

	if (!lst)
		return (0);
	curr = lst;
	*max = curr->data;
	curr = curr->next;
	while (curr != NULL)
	{
		if (*max < curr->data)
			*max = curr->data;
		curr = curr->next;
	}
	return (1);
}
