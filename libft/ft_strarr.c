/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:44:36 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/14 13:35:47 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Function checkss if given member is in array of strings. 

	Note: `bigger_length` is used to check till the end of either input for
	`ft_strncmp`.
*/
t_bool	ft_strarr_has(char *mem, char **arr)
{
	int	i;
	int	bigger_length;
	int	mem_length;

	i = -1;
	mem_length = ft_strlen(mem);
	while (arr[++i])
	{
		bigger_length = ft_strlen(arr[i]);
		if (mem_length > bigger_length)
			bigger_length = mem_length;
		if (ft_strncmp(mem, arr[i], bigger_length) == 0)
			return (TRUE);
	}
	return (FALSE);
}
