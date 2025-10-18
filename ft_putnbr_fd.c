/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanani <jmanani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:58:53 by jmanani           #+#    #+#             */
/*   Updated: 2025/10/18 16:02:20 by jmanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	calc_and_print(long int nb, int fd)
{
	char	print_char;

	if (nb >= 10)
		calc_and_print(nb / 10, fd);
	print_char = (nb % 10) + 48;
	write(fd, &print_char, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	calc_and_print(num, fd);
}
