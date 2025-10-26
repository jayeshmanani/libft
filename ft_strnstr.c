/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:07:01 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/18 19:18:52 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	int		temp;

	index = 0;
	if ((!big && len == 0) || '\0' == little[0])
		return ((char *)big);
	while (((char *)big)[index] != 0 && index < len)
	{
		temp = 0;
		if (((char *)big)[index] == ((char *)little)[temp])
		{
			while (((char *)little)[temp] != 0 && (((char *)big)[index
					+ temp] == ((char *)little)[temp]) && index + temp < len)
				temp++;
			if ('\0' == ((char *)little)[temp])
				return (&((char *)big)[index]);
		}
		index++;
	}
	return (NULL);
}
