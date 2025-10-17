/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:28:29 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/17 16:00:38 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(const char *str, char c)
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
		while (!(*str == c))
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

char	*get_word_from_string(const char *str, char c, int i)
{
	char	*arr;
	int		j;
	int		size_of_word;

	j = i;
	while (str[j] != '\0' && (!(str[j] == c)))
		j++;
	size_of_word = j - i;
	// printf("Size of the words is: %d\n", size_of_word);
	arr = (char *)ft_calloc((size_of_word + 1), sizeof(char));
	if (!arr)
		return (0);
	ft_strlcpy(arr, &str[i], size_of_word + 1);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	temp;
	size_t	words;
	char	**arr;

	i = 0;
	j = 0;
	words = word_count(s, c);
	arr = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!arr)
		return (0);
	while (s[i] != 0 && j < words)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		temp = 0;
		while (s[i] != c && s[i] != 0)
		{
			temp++;
			i++;
		}
		arr[j] = (char *)ft_calloc(temp+1, sizeof(char));
		if (!arr[j])
		{
			while (j)
				free(arr[j--]);
			free(arr);
			return (0);
		}
		arr[j] = ft_substr(s, i - temp, temp);
		j++;
	}
	return (arr);
}

// int	main(void)
// {
// // // 	char	**tab;

// // // 	// char *string = "      split       this for   me  !       ";
// // // 	// char **expected = ((char *[6]){"split", "this", "for", "me", "!",
// // // 	// 		((void *)0)});
// // // 	// char **result = ft_split(string, ' ');
// // // 	//                    6           18   23    29
// // // 	tab = ft_split("      split       this for   me  !       ", ' ');
// // 	char **tab = ft_split("  tripouille  42  ", ' ');
// // // 	// mcheck(tab, sizeof(char *) * 3);
// 	ft_split("hello!", ' ');
// }
