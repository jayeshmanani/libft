/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:28:29 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/17 11:41:23 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char *str, char c)
{
	int	count;
	int	is_word;

	is_word = 0;
	count = 0;
	while ((*str != '\0') && (*str == c))
		str++;
	while (*str != '\0')
	{
		is_word = 0;
		if (!(*str++ == c) && (!is_word))
		{
			is_word = 1;
			count++;
		}
	}
	return (count);
}

char	*get_word_from_string(char *str, char c, int i)
{
	char	*arr;
	int		j;
	int		size_of_word;

	j = i;
	while (str[j] != '\0' && (!(str[j] == c)))
		j++;
	size_of_word = j - i;
	arr = (char *)ft_calloc((size_of_word + 1), sizeof(char));
	if (!arr)
		return (0);
	j = 0;
	while (j < size_of_word)
		arr[j++] = str[i++];
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**arr;

	i = 0;
	j = 0;
	words = word_count(s, c);
	arr = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!arr)
		return (0);
	arr[words] = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		arr[j] = get_word_from_string(s, c, i);
		if (arr[j] == 0)
		{
			while (j)
				free(arr[j--]);
			free(arr);
			return (0);
		}
		i += ft_strlen(arr[j++]);
	}
	return (arr);
}

// int	main(void)
// {
// 	char *string = "      split       this for   me  !       ";
// 	char **expected = ((char *[6]){"split", "this", "for", "me", "!",
// 			((void *)0)});
// 	char **result = ft_split(string, ' ');
// }