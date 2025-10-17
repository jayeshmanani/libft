/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:25:10 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/17 12:50:32 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	int		i;
	int		str_len;

	i = 0;
	str_len = ft_strlen(s);
	if (str_len < len)
		new_str = (char *)malloc(sizeof(char) * (1));
	else
		new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (0);
	while ((start + i < start + len) && (start < str_len))
	{
		new_str[i++] = s[start + i];
	}
	new_str[i] = '\0';
	return (new_str);
}
