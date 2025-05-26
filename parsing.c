/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:43:10 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/26 21:42:54 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*clean_join_all_arguments(int ac, char **av)
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

int	get_arr_strs(int ac, char **av, char ***out_words)
{
	char	*clean_str;
	char	**words;

	clean_str = NULL;
	words = *out_words;
	if (ac > 1)
	{
		clean_str = clean_join_all_arguments(ac, av);
		if (!clean_str)
			return (0);
		if (!is_all_delim(clean_str) && is_all_valid(clean_str))
		{
			words = ps_split(clean_str);
			if (!words)
				return (free_strs(words), free(clean_str), 0);
			*out_words = words;
		}
		else
			return (free(clean_str), 0);
	}
	return (free(clean_str), 1);
}

int	convert_strs_to_ints(char **strs, int **num_out)
{
	size_t	i;
	size_t	strs_count;
	int		is_valid_num;
	int		num;
	int		*numbers;

	i = 0;
	strs_count = count_arr_strs(strs);
	numbers = malloc(sizeof(int) * (strs_count + 1));
	if (!numbers)
		return (0);
	num = 0;
	while (strs[i])
	{
		is_valid_num = ps_atoi_safe(strs[i], &num);
		if (is_valid_num)
			numbers[i] = num;
		else
			return (free(numbers), 0);
		i++;
	}
	numbers[i] = 0;
	*num_out = numbers;
	return (i);
}

int	process_and_validate(int ac, char **av, int **numbers_out)
{
	int		processed;
	int		converted;
	char	**strs;

	strs = NULL;
	processed = get_arr_strs(ac, av, &strs);
	if (!processed || !strs)
		return (0);
	converted = convert_strs_to_ints(strs, numbers_out);
	if (!converted)
		return (free_strs(strs), 0);
	if (is_dup(*numbers_out, converted))
		return (free_strs(strs), 0);
	free_strs(strs);
	return (converted);
}
