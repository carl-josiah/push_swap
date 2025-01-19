/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:32:25 by ccastro           #+#    #+#             */
/*   Updated: 2025/01/16 11:44:22 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (words);
}

static size_t	count_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ps_split(char const *s, char c)
{
	size_t	len;
	size_t	word_count;
	size_t	i;
	char	**str;

	word_count = count_words(s, c);
	i = 0;
	str = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = count_len(s, c);
			str[i++] = ps_substr(s, 0, len);
			s = s + len;
		}
	}
	str[i] = NULL;
	return (str);
}
