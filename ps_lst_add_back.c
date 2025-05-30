/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:27:44 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 19:41:15 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_lst_add_back(t_list **lst, t_list *node)
{
	t_list	*curr;

	curr = *lst;
	if (!curr)
	{
		*lst = node;
		return ;
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = node;
}
