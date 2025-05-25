/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:50:33 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/25 18:20:44 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	word_counter(char *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && is_delim(str[i]))
		i++;
	while (str[i])
	{
		if (!is_delim(str[i]))
		{
			count++;
			while (str[i] && !is_delim(str[i]))
				i++;
		}
		while (str[i] && is_delim(str[i]))
			i++;
	}
	return (count);
}

size_t	count_word_len(char *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && is_delim(str[i]))
		i++;
	while (str[i] && !is_delim(str[i]))
	{
		count++;
		i++;
	}
	return (count);
}

char	*extract_word(char *str, size_t *i)
{
	size_t	j;
	char	*word;

	j = 0;
	while (str[*i] && is_delim(str[*i]))
		(*i)++;
	if (!str[*i])
		return (NULL);
	word = malloc(sizeof(char) * (count_word_len(&str[*i]) + 1));
	if (!word)
		return (NULL);
	while (str[*i] && !is_delim(str[*i]))
		word[j++] = str[(*i)++];
	word[j] = '\0';
	return (word);
}

char	**ps_split(char *clean_str)
{
	size_t	i;
	size_t	j;
	char	**words;
	size_t	word_count;

	i = 0;
	j = 0;
	word_count = word_counter(clean_str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	while (clean_str[i])
	{
		if (clean_str[i] && !is_delim(clean_str[i]))
		{
			words[j] = extract_word(clean_str, &i);
			if (!words[j])
				return (free_words(words), NULL);
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}
