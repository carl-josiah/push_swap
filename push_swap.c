/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:58:39 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/23 16:16:45 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_list	*lst;

	lst = NULL;
	if (ac > 0)
		printf("ac:%d\n", ac - 1);
	if (ac <= 2)
	{
		//ft_printf(2, "%s\n", ARGER01);
		//write(2, "Error: not enough arguments\n", ft_strlen);
		exit(EXIT_FAILURE);
	}
	lst = parsing(ac, av);
	if (!lst)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	ft_free_lst(lst);
	return (0);
}
