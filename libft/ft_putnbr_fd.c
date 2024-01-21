/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:23:32 by codespace         #+#    #+#             */
/*   Updated: 2023/09/16 17:58:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	handle_edge_cases(long long *nb, int fd)
{
	if (*nb == -2147483648)
	{
		write(fd, "-2", 2);
		*nb = 147483648;
	}
	else if (*nb < 0)
	{
		write(fd, "-", 1);
		*nb = *nb * -1;
	}
	else if (*nb == 0)
	{
		write(fd, "0", 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int			place_value;
	int			write_zero;
	int			char_value;
	long long	big_n;

	big_n = n;
	handle_edge_cases(&big_n, fd);
	write_zero = 0;
	place_value = 1000 * 1000 * 1000;
	while (place_value > 0)
	{
		if (big_n / place_value != 0 || write_zero == 1)
		{
			if (write_zero == 0)
				write_zero = 1;
			char_value = big_n / place_value + '0';
			write(fd, &char_value, 1);
		}
		big_n = big_n % place_value;
		place_value /= 10;
	}
}
