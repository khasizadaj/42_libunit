/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:41:18 by jkhasiza          #+#    #+#             */
/*   Updated: 2023/09/16 18:14:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*c_s;

	c_s = (char *) s;
	i = 0;
	while (i < n)
	{
		if (c_s[i] == (char) c)
			return (&c_s[i]);
		i++;
	}
	return (NULL);
}
