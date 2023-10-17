/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logger.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:04:17 by mbraiban          #+#    #+#             */
/*   Updated: 2023/10/17 13:22:50 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logger.h"
#include <stdio.h>

void	ft_lognl(char *str)
{
	printf("%s\n", str);
}

void	ft_clognl(t_colors color, char *str)
{
	printf("%s%s%s\n", ft_getcolor(color), str, ft_getcolor(RESET));
}

char* ft_getcolor(t_colors color)
{
	if (color == RED)
	{
		return ("\x1b[31m");
	}
	else if (color == GREEN)
	{
		return ("\x1b[32m");
	}
	else if (color == RESET)
	{
		return ("\x1b[0m");
	}
}