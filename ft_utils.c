/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:30:34 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/24 16:01:54 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"

int	is_delim(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
