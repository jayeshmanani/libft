/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:07:03 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 17:32:09 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		ind;
	char	*addrs;

	ind = 0;
	addrs = 0;
	while (s[ind] != 0)
	{
		if (s[ind] == c)
		{
			addrs = &s[ind];
		}
		ind++;
	}
	if (s[ind] == 0 && c == 0)
		return (&s[ind]);
	return (addrs);
}
