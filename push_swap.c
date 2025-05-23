/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:58:39 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/23 13:55:12 by ccastro          ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int		i;
	int		value;
	t_list	*lst;

	i = 1;
	lst = NULL;
	if (ac <= 2)
		exit(1);
	while (i < ac)
	{
		value = 0;
		if (!is_num(av[i]) || !ft_atoi_safe(av[i], &value))
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		lst = ft_lst_add_back(lst, ft_lst_new(value));
		i++;
	}
	if (is_dup(lst))
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	return (0);
}

// put this function into parsing.c or even split that even more
// then create more header files to keep it organized then maybe the make file cuz
// its getting too much