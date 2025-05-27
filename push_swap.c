/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 17:04:05 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "test.h"

int	write_error_and_free_numbers(int *numbers)
{
	write(1, "Error\n", 6);
	return (free(numbers), 1);
}

int	main(int ac, char **av)
{
	int		*numbers;
	int		count;
	int		valid;
	t_list	*list_of_num;

	numbers = NULL;
	list_of_num = NULL;
	if (ac > 1)
	{
		count = process_and_validate(ac, av, &numbers);
		if (!count)
			return (write_error_and_free_numbers(numbers));
		valid = arr_to_list(numbers, count, &list_of_num);
		if (!valid)
			return (write_error_and_free_numbers(numbers));
	}
	return (free(numbers), free_list(list_of_num), EXIT_SUCCESS);
}
