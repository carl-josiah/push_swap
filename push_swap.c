/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:58:39 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/22 15:05:02 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

int	num_only(char *str)
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

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac <= 2)
		exit(1);
	while (i < ac)
	{
		if (!num_only(av[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return (0);
}
