/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:12:16 by ccastro           #+#    #+#             */
/*   Updated: 2025/01/13 11:19:48 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# include <stdio.h>
# include <string.h>

int		ps_atoi(const char *str);
char	**ps_split(char const *s, char c);
char	*ps_strdup(const char *s1);
size_t	ps_strlen(const char *s);
char	*ps_substr(char const *s, unsigned int start, size_t len);

#endif