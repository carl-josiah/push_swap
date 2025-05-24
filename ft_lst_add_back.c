/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:40:23 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/24 16:01:54 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

t_list	*ft_lst_add_back(t_list *head, t_list *new_node)
{
	t_list	*curr;

	curr = head;
	if (!head)
		return (new_node);
	while (curr->next)
		curr = curr->next;
	curr->next = new_node;
	return (head);
}
