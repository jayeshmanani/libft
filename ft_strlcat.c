/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:54 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 15:49:09 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	int				i;

	i = -1;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (src_len + size);
	while ((src[++i] != '\0') && ((dest_len + i) < (size - 1)))
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
