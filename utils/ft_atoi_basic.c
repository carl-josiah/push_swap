/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_basic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:48:34 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/22 19:31:57 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc.h"

int	ft_atoi_basic(const char *str)
{
	int					sign;
	int					i;
	unsigned long long	nbr;

	nbr = 0;
	sign = 1;
	i = 0;
	while (is_delim(str[i]))
		i++;
	if (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		nbr = ((nbr * 10) + (str[i] - '0'));
		if (sign == -1 && nbr > (unsigned long long)INT_MAX + 1)
			return (0);
		if (nbr > INT_MAX)
			return (-1);
		i++;
	}
	return (nbr * sign);
}
