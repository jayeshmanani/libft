/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:54 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 15:00:57 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	j_index;
	int				i;

	i = 0;
	index = 0;
	j_index = 0;
	while (dest[index] != 0)
		index++;
	while (src[j_index] != 0)
		j_index++;
	if (index >= size)
		return (j_index + size);
	while ((src[i] != '\0') && ((index + i) < (size - 1)))
	{
		dest[index + i] = src[i];
		i++;
	}
	dest[index + i] = '\0';
	return (index + j_index);
}
