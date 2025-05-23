/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:45:45 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/23 14:56:20 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc.h"

void	ft_free_lst(t_list *lst)
{
	t_list	*curr;
	t_list	*temp;

	curr = lst;
	temp = NULL;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}
