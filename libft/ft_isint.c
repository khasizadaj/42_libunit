/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:22:09 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/16 17:13:28 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isint(char *str)
{
	int	i;

	if (!str)
		return (FALSE);
	if (ft_strlen(str) == 0)
		return (FALSE);
	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			i++;
		if (ft_isdigit(str[i]) == FALSE)
			return (FALSE);
		i++;
	}
	if (ft_strlen(str) == 1 && (str[0] == '-' || str[0] == '+'))
		return (FALSE);
	return (TRUE);
}
