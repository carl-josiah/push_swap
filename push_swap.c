/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/06/04 13:47:29 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	write_error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

int	error_and_free_numbers(int *num)
{
	write(2, "Error\n", 6);
	if (num)
		free(num);
	return (1);
}

int	error_and_cleanup(int *num, t_list *list_of_num)
{
	write(2, "Error\n", 6);
	return (free(num), free_list(&list_of_num), 1);
}

int	has_empty_arg(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] && is_delim(av[i][j]))
			j++;
		if (av[i][j] == '\0')
			return (1);
		i++;
	}
	return (0);
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
		if (has_empty_arg(ac, av))
			return (write_error());
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
