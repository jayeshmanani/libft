/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:07:01 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 17:39:53 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	index;
	int	temp;

	index = 0;
	if (little[0] == '\0')
		return (big);
	while (big[index] != 0 && index < len)
	{
		temp = 0;
		if (big[index] == little[temp])
		{
			while (little[temp] != 0 && (big[index + temp] == little[temp])
				&& index + temp < len)
			{
				temp++;
			}
			if (little[temp] == '\0')
				return (&big[index]);
		}
		index++;
	}
	return (0);
}
