/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:10:23 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/26 20:31:26 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_all_valid_sign(char *str, size_t *i);

static int	is_all_valid_sign(char *str, size_t *i)
{
	if (*i == 0 || is_delim(str[*i - 1]))
	{
		if (str[*i + 1] == '\0' || !is_digit(str[*i + 1]))
			return (0);
	}
	return (1);
}

int	is_all_delim(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && is_delim(str[i]))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int	is_all_valid(char *clean_str)
{
	size_t	i;

	i = 0;
	while (clean_str[i])
	{
		if (is_sign(clean_str[i]))
		{
			if (is_all_valid_sign(clean_str, &i))
				i++;
			else
				return (0);
		}
		if (is_digit(clean_str[i]))
		{
			while (clean_str[i] && is_digit(clean_str[i]))
				i++;
			if (clean_str[i] && !is_delim(clean_str[i]))
				return (0);
		}
		else if (is_delim(clean_str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

size_t	count_arr_strs(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

int	is_dup(int *numbers, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i <= len - 1)
	{
		j = i + 1;
		while (j <= (len - 1))
		{
			if (numbers[i] == numbers[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
