/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:28:29 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/16 18:44:59 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

int	word_count(char *str, char charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while ((str[i] != '\0') && (is_in_charset(str[i], charset)))
		i++;
	while (str[i] != '\0')
	{
		if (!is_in_charset(str[i], charset) && count == 0)
			count++;
		else if (!is_in_charset(str[i], charset) && is_in_charset(str[i - 1],
				charset))
			count++;
		i++;
	}
	return (count);
}

char	*get_word_from_string(char *str, char charset, int i)
{
	char	*arr;
	int		j;
	int		size_of_word;

	j = i;
	while (str[j] != '\0' && (!is_in_charset(str[j], charset)))
		j++;
	size_of_word = j - i;
	arr = (char *)ft_calloc((size_of_word + 1), sizeof(char));
	if (!arr)
		return (0);
	// arr[size_of_word] = '\0';
	j = 0;
	while (j < size_of_word)
		arr[j++] = str[i++];
	return (arr);
}

int	str_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
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
	arr = (char **)ft_calloc((words + 1), sizeof(char));
	if (!arr)
		return (0);
	arr[words] = 0;
	while (s[i] != 0)
	{
		if (is_in_charset(s[i], c))
		{
			i++;
			continue ;
		}
		arr[j] = get_word_from_string(s, c, i);
		i += str_len(arr[j++]);
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