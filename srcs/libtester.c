/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:48:35 by mbraiban          #+#    #+#             */
/*   Updated: 2023/10/17 13:27:57 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtester.h"
#include "logger.h"
#include <stdio.h>

void	ft_test_func1(int input, int expected_return, int (*func)(int))
{
	if (expected_return == (*func)(input))
	{
		ft_clognl(GREEN, "PASS");
	}
	else
	{
		ft_clognl(RED, "FAILED\n");
	}
}