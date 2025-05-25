/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:11:57 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/25 13:50:51 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "test.h"

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

// int	is_valid(char *clean_str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (clean_str[i])
// 	{
// 		while (is_delim(clean_str[i]))
// 			i++;
// 		if (!(is_sign(clean_str[i]) || is_digit(clean_str[i])))
// 			return (0);
// 		else if (is_sign(clean_str[i]) && clean_str[i + 1] != '\0')
// 		{
// 			i++;
// 			if (!is_digit(clean_str[i]))
// 				return (0);
// 		}
// 		if (is_digit(clean_str[i]) || is_delim(clean_str[i]))
// 			i++;
// 	}
// 	return (1);
// }

int	main(int ac, char **av)
{
	char	*clean_str;

	if (ac > 1)
	{
		clean_str = parse_args(ac, av);
		if (!clean_str)
			exit(EXIT_FAILURE);
		// if (is_valid(clean_str))
		// {
		// 	printf("valid!!!\n");
		// }
		printf("%s\n", clean_str);
		free(clean_str);
	}
	return (EXIT_SUCCESS);
}
