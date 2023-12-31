/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtester.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:45:17 by mbraiban          #+#    #+#             */
/*   Updated: 2023/10/18 20:13:41 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTESTER_H
# define LIBTESTER_H

void	ft_test_func1(int input, int expt_return, int (*func)(int));

void	ft_test_funcstr(char *input, int expt_return, int (*func)(const char*));

#endif