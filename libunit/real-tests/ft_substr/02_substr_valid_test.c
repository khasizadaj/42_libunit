/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_substr_valid_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:19:06 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 21:39:07 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_substr_test.h"

int	ft_substr_valid_test(void)
{
	char	*str;
	char	*res;

	str = "Hello World";
	res = ft_substr(str, 6, 5);
	if (res == NULL)
		return (KO);
	if (ft_strncmp(res, "World", 5) == 0)
		return (free(res), OK);
	return (free(res), KO);
}
