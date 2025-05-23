/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:58:29 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/23 15:43:53 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_H
# define INC_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define ARGER01 "Error: not enough arguments"

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

int		ft_atoi_basic(const char *str);
int		ft_atoi_safe(const char *str, int *out);
int		is_delim(char c);
int		is_sign(char c);
int		is_alpha(char c);
int		is_digit(char c);
t_list	*ft_lst_new(int nbr);
t_list	*ft_lst_add_back(t_list *head, t_list *new_node);
void	ft_free_lst(t_list *lst);
t_list	*parsing(int ac, char **av);

#endif