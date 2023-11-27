/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:32:11 by mbraiban          #+#    #+#             */
/*   Updated: 2023/11/27 16:39:18 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, const char *src, int size)
{
	int	counter;
	if (size == 0 || !dst || !src)
		return (0);
	counter = 0;
	while (counter < size - 1)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (counter);
}