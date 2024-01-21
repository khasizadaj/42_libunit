/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:30:36 by jkhasiza          #+#    #+#             */
/*   Updated: 2023/09/16 15:32:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chr_in(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strltrim_count(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (s1[i] == '\0')
		return (0);
	while (s1[i] && chr_in(s1[i], set) == 1)
		i++;
	return (i);
}

int	ft_strrtrim_count(char const *s1, char const *set, int l_count)
{
	int	len;
	int	i;

	len = ft_strlen((char *) s1);
	if (len == 0)
		return (0);
	i = len - 1;
	while (s1[i] && chr_in(s1[i], set) == 1 && i > l_count - 1)
	{
		i--;
	}
	return (len - 1 - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l_count;
	int		r_count;

	if (ft_strlen((char *) set) == 0)
		return ((ft_substr(s1, 0, ft_strlen((char *) s1))));
	l_count = ft_strltrim_count(s1, set);
	r_count = ft_strrtrim_count(s1, set, l_count);
	return (ft_substr(s1, l_count, ft_strlen((char *) s1) - l_count - r_count));
}
