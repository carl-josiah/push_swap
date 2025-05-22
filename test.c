/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:42:09 by ccastro           #+#    #+#             */
/*   Updated: 2025/05/22 19:48:40 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"
#include <stdio.h>

int	main(void)
{
	int		num;
	char	str[20] = "2147483648";

	num = 0;
	printf("atoi: %d\nnum: %d\n", ft_atoi_safe(str, &num), num);
	return (0);
}
