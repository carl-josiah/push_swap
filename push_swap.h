/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:12:19 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/30 22:59:09 by ccastro          ###   ########.fr       */
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
	int				pos;
	struct s_list	*next;
}					t_list;

typedef struct s_stack
{
	t_list	*head;
	size_t	size;
}			t_stack;

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
int		arr_to_list(int *num, int count, t_list **list);
t_list	*ps_lst_new(int nbr);
void	ps_lst_add_back(t_list **lst, t_list *node);
size_t	ps_lst_size(t_list *head);
int		sort_stack(t_list *list_of_num);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	rb(t_stack *b);
void	ra(t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	sort_2(t_stack *a);
void	sort_3(t_stack *a);
void	sort_5(t_stack *a, t_stack *b);
t_list	*find_smallest_node(t_stack *a);
size_t	find_smallest_node_index(t_stack *a, t_list *smallest_node);
void	sort_4(t_stack *a, t_stack *b);
int		is_sorted_ascending(t_stack *a);
int		ps_lst_max(t_list *lst, int *max);
void	free_list(t_list **head);
void	radix(t_stack *a, t_stack *b, size_t size);
int		count_bits(int num);
void	fill_array(t_list *node, int *arr, size_t size);
void	sort_int_tab(int *tab, size_t size);
void	assign_pos(t_list *node, int *arr, size_t size);
void	process_bit_pos(t_stack *a, t_stack *b, size_t size, int bit_pos);

#endif