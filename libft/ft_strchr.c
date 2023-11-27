/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:00:38 by mbraiban          #+#    #+#             */
/*   Updated: 2023/11/27 17:07:05 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int tofind)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] == tofind)
			break ;
		counter++;
	}
	return (str + counter);
}