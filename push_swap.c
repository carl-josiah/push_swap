/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/25 18:43:02 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	*clean_str;
	char	**words;

	clean_str = NULL;
	words = NULL;
	if (ac > 1)
	{
		clean_str = parse_args(ac, av);
		if (!clean_str)
			return (EXIT_FAILURE);
		if (!is_all_delim(clean_str) && is_all_valid(clean_str))
		{
			words = ps_split(clean_str);
			if (!words)
				return (free_words(words), free(clean_str), EXIT_FAILURE);
			write(1, "Valid\n", 6);
		}
		else
			write(2, "Error\n", 6);
	}
	return (free(clean_str), free_words(words), EXIT_SUCCESS);
}
