/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 15:20:39 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int	*numbers;
	int	count;

	numbers = NULL;
	if (ac > 1)
	{
		count = process_and_validate(ac, av, &numbers);
		if (!count)
		{
			write(1, "Error\n", 6);
			return (free(numbers), EXIT_FAILURE);
		}
	}
	return (free(numbers), EXIT_SUCCESS);
}
