/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:12:19 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/26 21:30:35 by ccastro          ###   ########.fr       */
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
int		ps_atoi_safe(const char *str, int *out);
size_t	ps_strlen(char *str);
char	*ps_strjoin(int ac, char **av);
char	*ps_strdup(char *str);
char	**ps_split(char *clean_str);
char	*clean_joined_str(char *joined_str);
char	*clean_join_all_arguments(int ac, char **av);
int		get_arr_strs(int ac, char **av, char ***out_words);
void	free_strs(char **strs);
size_t	count_arr_strs(char **strs);
int		convert_strs_to_ints(char **strs, int **num_out);
int		is_dup(int *numbers, int len);
int		process_and_validate(int ac, char **av, int **numbers_out);

#endif