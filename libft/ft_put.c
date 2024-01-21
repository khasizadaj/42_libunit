/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:31:36 by jkhasiza          #+#    #+#             */
/*   Updated: 2023/12/16 18:52:19 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putuint(unsigned int n, int fd)
{
	char	c;

	if (n >= 10)
	{
		ft_putuint(n / 10, fd);
		ft_putuint(n % 10, fd);
	}
	else
	{
		c = n + '0';
		write(fd, &c, 1);
	}
}

void	ft_putmemory(void *arg)
{
	unsigned long long	decimal_value;
	char				*hex;

	if (arg == NULL)
		return ;
	decimal_value = (unsigned long long) arg;
	hex = llu_to_hex(decimal_value, 0);
	if (!hex)
		return ;
	write(1, "0x", 2);
	write(1, hex, ft_strlen(hex));
	free(hex);
}
