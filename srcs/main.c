/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:11:03 by mbraiban          #+#    #+#             */
/*   Updated: 2023/10/18 20:30:40 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtester.h"
#include <stdio.h>
#include <logger.h>
#include <stdlib.h>

void	ft_isalpha_test(void)
{
	ft_lognl("testing is_alpha");
	ft_test_func1(32, 0, &ft_isalpha);
	ft_test_func1('a', 1, &ft_isalpha);
	ft_test_func1(456, 0, &ft_isalpha);
	ft_test_func1('Z', 1, &ft_isalpha);
}

void	ft_strlen_test(void)
{
	ft_lognl("testing strlen");
	ft_test_funcstr("JE SUIS LE GOAT", 15, &ft_strlen);
	ft_test_funcstr("0", 1, &ft_strlen);
	ft_test_funcstr(NULL, 0, &ft_strlen);
}

void	ft_memset_test(void)
{
	ft_lognl("testing memset");
	int	*ptr = malloc(5);
	printf("%p \n", ft_memset(ptr, 5, 0));
}

int	main(int argc, char *argv[])
{
	ft_isalpha_test();
	ft_strlen_test();
	ft_memset_test();
	return (0);
}
