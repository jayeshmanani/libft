/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:07:03 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/17 14:03:40 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*addrs;

	addrs = NULL;
	while (*s != 0)
	{
		if (*s == (char)c)
			addrs = (char *)s;
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
		return ((char *)s);
	return (addrs);
}
