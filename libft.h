/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:35:49 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 15:42:32 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int inp);
int				ft_isdigit(int inp);
int				ft_isalnum(int inp);
int				ft_isascii(int inp);
int				ft_isprint(int inp);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, int n);
// memcpy
void			*ft_memmove(void *dest, const void *src, int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_toupper(int inp);
int				ft_tolower(int inp);
// strchr
// strrchr
int				ft_strncmp(const char *s1, const char *s2, size_t n);
// memchr
// memcmp
// strnstr
int				ft_atoi(char *inp);
// calloc
// strdup

#endif
