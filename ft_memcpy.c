/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:43 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 15:59:22 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;

	if (dest == 0 && src == 0)
		return (0);
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	while (n--)
	{
		*temp_dest++ = *temp_src++;
	}
	return (dest);
}
