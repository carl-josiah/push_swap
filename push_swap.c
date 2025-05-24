/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/24 19:51:55 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "test.h"

int	main(int ac, char **av)
{
	char	*joined_str;
	char	*clean_str;

	if (ac > 1)
	{
		joined_str = ps_strjoin(ac - PROGRAM_NAME, av + AFTER_PROGRAM_NAME);
		if (!joined_str)
			exit(EXIT_FAILURE);
		clean_str = clean_joined_str(joined_str);
		if (!clean_str)
		{
			free(joined_str);
			exit(EXIT_FAILURE);
		}
		printf("joined: %s\n", joined_str);
		printf("clean: %s\n", clean_str);
	}
	return (EXIT_SUCCESS);
}
