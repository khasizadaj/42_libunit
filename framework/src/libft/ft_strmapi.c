/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:32:29 by codespace         #+#    #+#             */
/*   Updated: 2023/09/16 18:35:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	res = ft_calloc(ft_strlen((char *) s) + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen((char *) s))
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
