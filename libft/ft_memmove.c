/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:23:43 by mbraiban          #+#    #+#             */
/*   Updated: 2023/11/27 16:26:54 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int size)
{
	unsigned int	counter;

	if (!dst || !src || size <= 0)
		return (0);
	counter = size;
	while (counter > 0)
	{
		((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
		counter--;
	}
	return (dst);
}