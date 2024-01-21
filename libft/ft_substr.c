/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:46:07 by jkhasiza          #+#    #+#             */
/*   Updated: 2023/09/16 15:25:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	length;

	length = (size_t) ft_strlen((char *) s);
	if (len > length)
		len = length;
	if (start >= length || length == 0)
		len = 0;
	if (len > length - start)
		len = length - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}
	// if (start >= length || length == 0 || len == 0)
	// {
	// 	sub = malloc(1);
	// 	if (sub == NULL)
	// 		return (NULL);
	// }
	// else
	// {
	// 	if (len > length)
	// 		len = length;
	// 	sub = malloc(sizeof(char) * (len + 1));
	// 	if (sub == NULL)
	// 		return (NULL);
	// 	while (i < len && s[start + i] != '\0')
	// 	{
	// 		sub[i] = s[start + i];
	// 		i++;
	// 	}
	// }
