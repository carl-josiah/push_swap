/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:27:44 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 14:33:34 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lst_add_back(t_list **lst, t_list *node)
{
	t_list	*curr;

	curr = *lst;
	if (!curr)
		*lst = node;
	while (curr != NULL)
	{
		if (curr->next == NULL)
		{
			curr->next = node;
			return ;
		}
		curr = curr->next;
	}
}
