/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:00:38 by mbraiban          #+#    #+#             */
/*   Updated: 2023/11/27 17:19:03 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int tofind)
{
	int	counter;
	int last_found;

	counter = 0;
	last_found = 0;
	while (str[counter])
	{
		if (str[counter] == tofind)
			last_found = counter;
		counter++;
	}
	return (str + last_found);
}