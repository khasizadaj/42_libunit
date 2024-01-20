/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:34:00 by codespace         #+#    #+#             */
/*   Updated: 2023/09/22 17:12:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *) s);
	if ((char) c == '\0')
		return ((char *) &s[i]);
	while (i > 0)
	{
		if (s[i - 1] == (char) c)
			return ((char *) &s[i - 1]);
		i--;
	}
	return (NULL);
}
