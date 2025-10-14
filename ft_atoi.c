/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:50:22 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/14 17:26:57 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_num(char *str, int index)
{
	int	num;

	num = 0;
	while (str[index] != 0)
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			num *= 10;
			num += str[index] - '0';
			index++;
		}
		else
			break ;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	index;
	int	mul;

	mul = 1;
	index = 0;
	if (*str == '-')
	{
		mul *= -1;
		index = 1;
	}
	return (mul * calc_num(str, index));
}
