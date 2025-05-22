/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:58:29 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/22 15:08:27 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_H
# define INC_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int	ft_atoi(char *str);
int	is_delim(char c);
int	is_sign(char c);
int	is_alpha(char c);
int	is_digit(char c);

#endif