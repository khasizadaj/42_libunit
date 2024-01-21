/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrtoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:34:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2023/12/16 19:29:27 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	i_count_digits(int n)
{
	int	count;

	if (n < 0)
		n *= -1;
	count = 1;
	n = n / 10;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

int	u_count_digits(unsigned int n)
{
	int	count;

	count = 1;
	n = n / 10;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

int	i_get_size(int n)
{
	int	size;

	size = i_count_digits(n);
	if (n < 0)
		size++;
	return (size);
}

char	*ft_dtoa(int n)
{
	char			*str;
	int				size;
	int				i;

	size = i_get_size(n);
	str = ft_calloc(sizeof(char), size + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	if (n < 0)
		n *= -1;
	i = 0;
	while (size - i - 1 >= 0)
	{
		if (size - i - 1 == 0 && str[0] == '-')
			break ;
		str[size - i - 1] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[size] = '\0';
	return (str);
}

char	*ft_utoa(unsigned int n)
{
	char			*str;
	int				size;
	int				i;

	size = u_count_digits(n);
	str = ft_calloc(sizeof(char), size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (size - i - 1 >= 0)
	{
		str[size - i - 1] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[size] = '\0';
	return (str);
}
