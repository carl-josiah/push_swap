/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:38:33 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/24 20:52:39 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_delim(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
