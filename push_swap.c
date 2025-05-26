/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/26 21:36:58 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int ac, char **av)
// {
// 	char	**strs;
// 	int		*numbers;
// 	int		processed;
// 	int		converted;

// 	strs = NULL;
// 	numbers = NULL;
// 	converted = 0;
// 	processed = get_arr_strs(ac, av, &strs);
// 	if (!strs)
// 		return (processed);
// 	converted = convert_strs_to_ints(strs, &numbers);
// 	if (!converted)
// 	{
// 		processed = 0;
// 		write(1, "Error\n", 6);
// 	}
// 	else if (converted > 0)
// 	{
// 		if (is_dup(numbers, converted))
// 		{
// 			processed = 0;
// 			write(1, "Error\n", 6);
// 		}
// 	}
// 	return (free_strs(strs), free(numbers), processed);
// }

int	main(int ac, char **av)
{
	int	*numbers;
	int	count;

	if (ac > 1)
	{
		numbers = NULL;
		count = process_and_validate(ac, av, &numbers);
		if (!count)
		{
			write(1, "Error\n", 6);
			return (EXIT_FAILURE);
		}
	}
	return (EXIT_SUCCESS);
}
