/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/30 16:22:30 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_and_free_numbers(int *num)
{
	write(1, "Error\n", 6);
	return (free(num), 1);
}

int	error_and_cleanup(int *num, t_list *list_of_num)
{
	write(1, "Error\n", 6);
	return (free(num), free_list(&list_of_num), 1);
}

int	main(int ac, char **av)
{
	int		*numbers;
	int		count;
	int		valid;
	int		sorted;
	t_list	*list_of_num;

	numbers = NULL;
	list_of_num = NULL;
	if (ac > 1)
	{
		count = process_and_validate(ac, av, &numbers);
		if (!count)
			return (error_and_free_numbers(numbers));
		valid = arr_to_list(numbers, count, &list_of_num);
		if (!valid)
			return (error_and_free_numbers(numbers));
		sorted = sort_stack(list_of_num);
		if (!sorted)
			return (error_and_cleanup(numbers, list_of_num));
	}
	return (free(numbers), EXIT_SUCCESS);
}
