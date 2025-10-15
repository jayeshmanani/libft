/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:35:49 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 13:32:04 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int inp);
int		ft_isdigit(int input);
int		ft_isalnum(int input);
int		ft_isascii(int input);
// isprint
int		ft_strlen(char *str);
// memset
void	ft_bzero(void *s, int n);
// memcpy
// memmove
// strlcpy
// strlcat
int		ft_toupper(int inp);
int		ft_tolower(int inp);
// strchr
// strrchr
// strncmp
// memchr
// memcmp
// strnstr
int		ft_atoi(char *inp);
// calloc
// strdup

#endif
