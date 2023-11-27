/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:45:51 by mbraiban          #+#    #+#             */
/*   Updated: 2023/11/09 14:21:36 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, unsigned int size)
{
	unsigned int	counter;

	if (!dst || !src || size <= 0)
		return (0);
	counter = 0;
	while (counter < size)
	{
		((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
		counter++;
	}
	return (dst);
}
