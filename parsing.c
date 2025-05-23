/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:14:01 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/23 14:56:46 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

int	is_num(char *str)
{
	int	i;

	i = 0;
	if (is_sign(str[0]))
		i++;
	while (str[i])
	{
		if (is_sign(str[i]) || is_delim(str[i]) || is_alpha(str[i]))
			return (0);
		else if (is_digit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	is_dup(t_list *head)
{
	t_list	*curr;
	t_list	*next;

	curr = head;
	next = curr->next;
	if (!curr)
		return (0);
	while (curr)
	{
		next = curr->next;
		while (next)
		{
			if (curr->data == next->data)
				return (1);
			next = next->next;
		}
		curr = curr->next;
	}
	return (0);
}

t_list	*parsing(int ac, char **av)
{
	int		i;
	int		value;
	t_list	*lst;

	i = 1;
	lst = NULL;
	while (i < ac)
	{
		value = 0;
		if (!is_num(av[i]) || !ft_atoi_safe(av[i], &value))
			return (NULL);
		lst = ft_lst_add_back(lst, ft_lst_new(value));
		i++;
	}
	if (is_dup(lst))
		return (NULL);
	return (lst);
}
