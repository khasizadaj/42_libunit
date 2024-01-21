/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:34:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 15:08:31 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 1;
	n = n / 10;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	if (n < 0)
		count++;
	return (count);
}

char	*allocate_memory(int n)
{
	int		size;
	char	*str;

	size = count_digits(n);
	if (n < 0)
		size++;
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

int	get_size(int n)
{
	int	size;

	size = count_digits(n);
	if (n < 0)
		size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	long long		big_number;
	int				i;

	size = get_size(n);
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	big_number = n;
	if (big_number < 0)
		str[0] = '-';
	if (big_number < 0)
		big_number *= -1;
	i = 0;
	while (size - i - 1 >= 0)
	{
		if (size - i - 1 == 0 && str[0] == '-')
			break ;
		str[size - i - 1] = big_number % 10 + '0';
		big_number = big_number / 10;
		i++;
	}
	str[size] = '\0';
	return (str);
}
