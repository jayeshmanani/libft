/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:50:22 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/15 15:51:30 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_num(char *str, int index)
{
	int	num;

	num = 0;
	while (str[index] != 0 && str[index] >= '0' && str[index] <= '9')
	{
		num *= 10;
		num += str[index] - '0';
		index++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	count_neg;
	int	index;

	num = 0;
	count_neg = 0;
	index = 0;
	while ((str[index] != 0) && ((str[index] < 14 && str[index] > 8)
			|| (str[index] == 32)))
		index++;
	while (((str[index] == '-') || (str[index] == '+')) && (str[index] != 0))
	{
		if (str[index] == '-')
			count_neg++;
		index++;
	}
	num = calc_num(str, index);
	if (count_neg % 2 == 0)
		return (num);
	return (-num);
}
