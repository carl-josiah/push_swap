/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_joined_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:29:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/26 16:57:47 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	clean_strlen(char *joined_str)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (joined_str[i] && is_delim(joined_str[i]))
		i++;
	while (joined_str[i])
	{
		if (!is_delim(joined_str[i]))
		{
			while (joined_str[i] && !is_delim(joined_str[i]))
			{
				len++;
				i++;
			}
			if (is_delim(joined_str[i]) || joined_str[i] == '\0')
			{
				len++;
				while (joined_str[i] && is_delim(joined_str[i]))
					i++;
			}
		}
	}
	return (len);
}

char	*clean_joined_str(char *joined_str)
{
	size_t	i;
	size_t	j;
	char	*clean_str;

	i = 0;
	j = 0;
	clean_str = malloc(sizeof(char) * (clean_strlen(joined_str) + 1));
	if (!clean_str)
		return (NULL);
	while (joined_str[i] && is_delim(joined_str[i]))
		i++;
	while (joined_str[i])
	{
		while (joined_str[i] && !is_delim(joined_str[i]))
		{
			clean_str[j++] = joined_str[i++];
			if (is_delim(joined_str[i]))
				clean_str[j++] = ' ';
		}
		while (joined_str[i] && is_delim(joined_str[i]))
			i++;
	}
	clean_str[j] = '\0';
	return (clean_str);
}
