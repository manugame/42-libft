/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:11:03 by mbraiban          #+#    #+#             */
/*   Updated: 2023/11/27 17:11:34 by mbraiban         ###   ########.fr       */
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
	int	*ptr = malloc(sizeof(int) * 5);
	printf("%p \n", ft_memset(ptr, 5, 5));

	ft_bzero(ptr, 5);
}

void	ft_memcpy_test(void)
{
	ft_lognl("testing memcpy");
	char	*ptr = malloc(sizeof(char) * 5);
	char	*dest = malloc(sizeof(char) * 5);

	int counter = 0;
	while (counter < 5)
	{
		ptr[counter] = counter + '\0';
		counter++;
	}

	ft_memcpy(dest, ptr, 5);

	counter = 0;
	while (counter < 5)
	{
		printf("%d \n", ptr[counter]);
		counter++;
	}

}

void	ft_memmove_test(void)
{
		ft_lognl("testing memmove");
	char	*ptr = malloc(sizeof(char) * 5);
	char	*dest = malloc(sizeof(char) * 5);

	int counter = 0;
	while (counter < 5)
	{
		ptr[counter] = counter + '\0';
		counter++;
	}

	ft_memmove(dest, ptr, 5);

	counter = 0;
	while (counter < 5)
	{
		printf("%d \n", ptr[counter]);
		counter++;
	}
}

void	ft_strlcpy_test()
{
	ft_lognl("testing strlcpy");
	char	*dst = malloc(sizeof(char) * 5);

	ft_strlcpy(dst, "test", 3);

	printf("%s \n", dst);
}

void	ft_strchr_test(void)
{
	ft_lognl("testing strchr ans strrchr");

	char *found = ft_strchr("je suis le goat le vrai", 'l');

	printf("%s \n", found);

	char *found2 = ft_strrchr("je suis le goat le vrai", 'l');

	printf("%s \n", found2);
}

int	main(int argc, char *argv[])
{
	ft_isalpha_test();
	ft_strlen_test();
	ft_memset_test();
	ft_memcpy_test();
	ft_memmove_test();
	ft_strlcpy_test();
	ft_strchr_test();
	return (0);
}
