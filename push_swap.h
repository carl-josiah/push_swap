/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:12:19 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/24 19:49:26 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define PROGRAM_NAME 1
# define AFTER_PROGRAM_NAME 1
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

size_t	ps_strlen(char *str);
char	*clean_joined_str(char *joined_str);
char	*ps_strjoin(int ac, char **av);
int		is_delim(char c);
char	*ps_strdup(char *str);

#endif