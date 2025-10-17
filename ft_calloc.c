/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:21 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/17 11:42:55 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*space;
	int		ind;

	ind = 0;
	space = malloc(nmemb * size);
	if (!space)
		return (0);
	ft_bzero(space, nmemb * size);
	return (space);
}

// int	main(void)
// {
// 	int size = 8539;

// 	void *d1 = ft_calloc(size, sizeof(int));
// 	void *d2 = calloc(size, sizeof(int));

//     int i = -1;
//     while(i++ < size){
//         printf("For D1 ft: , - %d, - %d\n", i, d1[i]);
//         printf("For D2 ft: , - %d, - %d\n", i, d2[i]);
//     }

// 	// printf("is true? %d\n", d1 == d2);
// }