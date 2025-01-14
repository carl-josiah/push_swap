/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:16:55 by ccastro           #+#    #+#             */
/*   Updated: 2025/01/13 11:31:27 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void write_error_nl()
// {
// 	write(2, "Error\n", 6);
// }

// int	main(int ac, char **av)
// {
// 	int	arr[100];
// 	int	i;
// 	int	num;

// 	i = 1;
// 	num = 0;
// 	while (av[i])
// 	{
// 		num = ps_atoi(av[i]);
// 		arr[i - 1] = num;
// 		i++;
// 	}
// 	i = 0;
// 	while (i + 1 < ac)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// }

int	main(void)
{
	char	s[30] = "Hello world! I am Carl Castro.";
	char	**split = NULL;
	int		i = 0;

	split = ps_split(s, ' ');
	printf("%s\n", *split);
	while (split[i])
	{
		printf("%s\n", *split);
		split = ps_split(s, ' ');
		i++;	
	}
}