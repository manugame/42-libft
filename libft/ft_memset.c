/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:21:25 by mbraiban          #+#    #+#             */
/*   Updated: 2023/10/18 20:29:32 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *pointer, int value, int count)
{
	int	counter;
	unsigned char *ptr;
	if (!pointer || count <= 0)
		return (0);

	ptr = pointer;
	counter = 0;
	while (counter < count)
	{
		*ptr++ = value;
	}
	return (pointer);
}