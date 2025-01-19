/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:16:55 by ccastro           #+#    #+#             */
/*   Updated: 2025/01/19 08:30:14 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	write_error_nl(void)
// {
// 	write(2, "Error\n", 6);
// }

static int	parsing(char *numbers)
{
	t_singly_list *root;
	
	root = malloc(sizeof(t_singly_list));
	if (!root)
		return (-1);
	
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i <= ac)
		{
			parsing(av[i]);
			i++;
		}
	}
}
