/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logger.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:04:42 by mbraiban          #+#    #+#             */
/*   Updated: 2023/10/17 13:36:36 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H

typedef enum e_colors {
	RED,
	GREEN,
	RESET
}	t_colors;

void	ft_lognl(char *str);

void	ft_clognl(t_colors color, char *str);

char	*ft_getcolor(t_colors color);

#endif