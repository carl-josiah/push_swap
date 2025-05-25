/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:33:46 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/25 18:45:45 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	count_arg_len(char **av)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ps_strjoin(int ac, char **av)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	arg_len;
	char	*joined;

	i = 0;
	k = 0;
	arg_len = count_arg_len(av);
	joined = malloc(sizeof(char) * (arg_len + (size_t)(ac - 1) + 1));
	if (!joined)
		return (ps_strdup(""));
	while (i < (size_t)ac)
	{
		j = 0;
		while (av[i][j])
			joined[k++] = av[i][j++];
		if (i < (size_t)(ac - 1))
			joined[k++] = ' ';
		i++;
	}
	joined[k] = '\0';
	return (joined);
}
