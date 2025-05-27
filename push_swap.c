/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/27 13:40:16 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
