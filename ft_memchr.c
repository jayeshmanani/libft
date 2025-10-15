/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:37 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 17:57:12 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		ind;
	char	*temp_s;

	temp_s = (unsigned char *)s;
	ind = 0;
	while (temp_s[ind] != 0 && ind < n)
	{
		if (temp_s[ind] == c)
		{
			return (&temp_s[ind]);
		}
		ind++;
	}
	if (temp_s[ind] == 0 && c == 0)
		return (&temp_s[ind]);
	return (0);
}
