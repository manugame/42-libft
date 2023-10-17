/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:11:03 by mbraiban          #+#    #+#             */
/*   Updated: 2023/10/17 13:11:18 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtester.h"
#include <stdio.h>

void	ft_isalpha_test(void)
{
	ft_test_func1(32, 0, &ft_isalpha);
	ft_test_func1('a', 1, &ft_isalpha);
	ft_test_func1(456, 0, &ft_isalpha);
	ft_test_func1('Z', 0, &ft_isalpha);
}


int	main(int argc, char *argv[])
{
	ft_isalpha_test();
	return (0);
}
