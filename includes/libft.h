/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraiban <mbraiban@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:00:20 by mbraiban          #+#    #+#             */
/*   Updated: 2023/11/27 17:11:13 by mbraiban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_strlen(const char *str);

void	*ft_memset(void *pointer, int value, int size);

void	ft_bzero(void *pointer, unsigned int size);

void	*ft_memcpy(void *destination, const void *source, unsigned int size);

void	*ft_memmove(void *dst, const void *src, unsigned int size);

int	ft_strlcpy(char *dst, const char *src, int size);

int	ft_strlcat(char *dst, const char *src, int size);

char 	*ft_strchr(const char * str, int tofind);

char 	*ft_strrchr(const char * str, int tofind);

#endif