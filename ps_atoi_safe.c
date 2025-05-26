/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_safe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 19:15:11 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/26 15:13:59 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_atoi_safe(const char *str, int *out)
{
	int					i;
	int					sign;
	unsigned long long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (is_delim(str[i]))
		i++;
	if (is_sign(str[i]))
		if (str[i++] == '-')
			sign = -1;
	while (is_digit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		if (sign == -1 && num > (unsigned long long)INT_MAX + 1)
			return (0);
		else if (num > INT_MAX)
			return (0);
		i++;
	}
	*out = sign * (int)num;
	return (1);
}
