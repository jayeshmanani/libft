/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:35:49 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 14:57:46 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int inp);
int				ft_isdigit(int inp);
int				ft_isalnum(int inp);
int				ft_isascii(int inp);
int				ft_isprint(int inp);
int				ft_strlen(char *str);
void			*ft_memset(void *s, int c, int n);
void			ft_bzero(void *s, int n);
// memcpy
void			*ft_memmove(void *dest, const void *src, int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_toupper(int inp);
int				ft_tolower(int inp);
// strchr
// strrchr
// strncmp
// memchr
// memcmp
// strnstr
int				ft_atoi(char *inp);
// calloc
// strdup

#endif
