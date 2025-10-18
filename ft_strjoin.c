/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:45:10 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/18 14:42:25 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!len)
		return (ft_strdup(""));
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (0);
	ft_strlcpy(new_str, s1, len + 1);
	ft_strlcat(new_str, s2, len + 1);
	return (new_str);
}
