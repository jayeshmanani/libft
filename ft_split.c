/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:28:29 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/18 13:55:07 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(const char *str, char c)
{
	size_t	count;
	int	is_word;

	is_word = 0;
	count = 0;

	while ((*str) && (*str == c))
		++str;
	while (*str != '\0')
	{
		is_word = 0;
		while (!(*str == c) && *str)
		{
			if (!is_word)
			{
				is_word = 1;
				count++;
			}
			str++;
		}
		str++;
	}
	return (count);
}

int assign_memory(char **arr, size_t index, size_t len){
	arr[index] = (char *)ft_calloc(len, sizeof(char));
	if (!arr[index])
	{
		while (index)
			free(arr[index--]);
		free(arr);
		return (1);
	}
	return 0;
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	words;
	char	**arr;

	i = 0;
	words = word_count(s, c);
	arr = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!arr)
		return (0);
	while (*s != 0 && i <= words)
	{
		len = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s != 0)
		{
			++len;
			++s;
		}
		if(len){
			if (assign_memory(arr, i, len+1))
				return NULL;
			ft_strlcpy(arr[i], (char *)(s-len), len+1);
		}
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	char **tab = ft_split("chinimala", ' ');
// }