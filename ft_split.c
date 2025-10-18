/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:28:29 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/18 14:41:34 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(const char *str, char c)
{
	size_t	count;
	bool	is_word;

	is_word = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && !is_word)
		{
			is_word = true;
			count++;
		}
		else if (*str == c)
			is_word = false;
		str++;
	}
	return (count);
}

bool	assign_memory(char **arr, size_t index, size_t len)
{
	arr[index] = (char *)ft_calloc(len, sizeof(char));
	if (!arr[index])
	{
		while (index)
			free(arr[index--]);
		free(arr);
		return (true);
	}
	return (false);
}

bool	fill_data(char **arr, char *s, size_t words, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s && i <= words)
	{
		len = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (assign_memory(arr, i, len + 1))
				return (true);
			ft_strlcpy(arr[i], (char *)(s - len), len + 1);
		}
		i++;
	}
	return (false);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**arr;

	words = word_count(s, c);
	arr = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!arr)
		return (0);
	if (fill_data(arr, s, words, c))
		return (NULL);
	return (arr);
}

// int	main(void)
// {
// 	char **tab = ft_split("chinimala", ' ');
// }