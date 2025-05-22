/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:48:34 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/22 17:50:50 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc.h"

int ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0
	sign = 1;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = ((nbr * 10) + (str[i] - '0'));
		i++;
	}
	return (sign * nbr);
}
