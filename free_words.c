/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_words.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:41:01 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/25 18:41:07 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_words(char **words)
{
	size_t	i;

	if (!words)
		return ;
	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
}
