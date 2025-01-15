/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:48:34 by ccastro           #+#    #+#             */
/*   Updated: 2025/01/14 20:44:17 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_atoi(const char *str)
{
	unsigned long long	nbr;
	int					sign;

	nbr = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = ((nbr * 10) + (*str - '0'));
		if (nbr > INT_MAX && sign == -1)
			return (0);
		if (nbr > INT_MAX)
			return (-1);
		str++;
	}
	return (nbr * sign);
}
