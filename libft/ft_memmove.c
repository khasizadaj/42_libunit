/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:02:57 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 15:08:53 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*c_src;
	char	*c_dest;

	c_src = (char *) src;
	c_dest = (char *) dest;
	if (c_src > c_dest)
	{
		ft_memcpy(dest, src, n);
	}
	else if (c_src < c_dest)
	{
		i = n;
		while (i > 0)
		{
			c_dest[i - 1] = c_src[i - 1];
			i--;
		}
	}
	return (dest);
}
