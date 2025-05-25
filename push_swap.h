/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:12:19 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/25 18:43:23 by ccastro          ###   ########.fr       */
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

int		is_delim(char c);
int		is_sign(char c);
int		is_digit(char c);
int		is_all_delim(char *str);
int		is_all_valid(char *clean_str);
size_t	ps_strlen(char *str);
char	*ps_strjoin(int ac, char **av);
char	*ps_strdup(char *str);
char	**ps_split(char *clean_str);
char	*clean_joined_str(char *joined_str);
char	*parse_args(int ac, char **av);
void	free_words(char **words);

#endif