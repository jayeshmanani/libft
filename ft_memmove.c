/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:45 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/23 16:37:21 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	else if (dest > src)
	{
		dest += n - 1;
		src += n - 1;
		while (i++ < n)
			*(char *)dest-- = *(char *)src--;
	}
	return (dest + 1);
}
