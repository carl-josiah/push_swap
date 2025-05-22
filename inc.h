/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:58:29 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/22 19:40:50 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_H
# define INC_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int	ft_atoi_basic(const char *str);
int	ft_atoi_safe(const char *str, int *out);
int	is_delim(char c);
int	is_sign(char c);
int	is_alpha(char c);
int	is_digit(char c);

#endif