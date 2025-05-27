/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:43:03 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 19:43:42 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "test.h"

void	test_print_list(t_list *head)
{
	t_list	*curr;

	curr = head;
	while (curr)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}
