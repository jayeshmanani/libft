/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:50:22 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/24 13:49:22 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc_num(const char *str)
{
	int	num;

	num = 0;
	while (*str != '\0' && *str >= '0' && *str <= '9')
		num = (num * 10) + *(str++) - '0';
	return (num);
}

int	ft_atoi(const char *str)
{
	int	is_neg;
	int	num;

	is_neg = 0;
	num = 0;
	while ((*str != '\0') && ((*str < 14 && *str > 8) || (*str == 32)))
		str++;
	if ((*str == '-' || *str == '+') && (*(str++) == '-'))
		is_neg = 1;
	num = calc_num(str);
	if (is_neg)
		return (-num);
	return (num);
}
