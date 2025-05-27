/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:30:21 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 16:49:14 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arr_to_list(int *num, int count, t_list **list)
{
	size_t	i;
	t_list	*head;
	t_list	*new_node;

	i = 0;
	head = NULL;
	new_node = NULL;
	while (i < (size_t)count)
	{
		new_node = ps_lst_new(num[i]);
		if (!new_node)
			return (free_list(head), 0);
		ps_lst_add_back(&head, new_node);
		i++;
	}
	*list = head;
	return (1);
}
