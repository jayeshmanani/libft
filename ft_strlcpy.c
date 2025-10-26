/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:56 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/16 17:08:57 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	int		src_len;

	len = 0;
	src_len = ft_strlen(src);
	if (size <= 0)
		return (src_len);
	while ((src[len] != '\0') && (len < size - 1))
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (src_len);
}
