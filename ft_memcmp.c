/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:40 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/16 11:31:32 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		ind;
	char	*temp_s1;
	char	*temp_s2;

	temp_s1 = (char *)s1;
	temp_s2 = (char *)s2;
	ind = 0;
	if (n == 0)
		return (0);
	while (temp_s1[ind] != 0 && temp_s2[ind] != 0 && ind < n)
	{
		if (temp_s1[ind] != temp_s2[ind])
			return ((unsigned char)temp_s1[ind] - (unsigned char)temp_s2[ind]);
		ind++;
	}
	if (ind != n && (temp_s1[ind] == 0 || temp_s2[ind] == 0))
		return ((unsigned char)temp_s1[ind] - (unsigned char)temp_s2[ind]);
	return (0);
}
