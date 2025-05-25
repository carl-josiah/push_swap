/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:43:10 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/25 18:43:15 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*parse_args(int ac, char **av)
{
	char	*joined_str;
	char	*clean_str;

	joined_str = ps_strjoin(ac - PROGRAM_NAME, av + AFTER_PROGRAM_NAME);
	if (!joined_str)
		return (NULL);
	clean_str = clean_joined_str(joined_str);
	if (!clean_str)
	{
		free(joined_str);
		return (NULL);
	}
	free(joined_str);
	return (clean_str);
}

// int	process_args