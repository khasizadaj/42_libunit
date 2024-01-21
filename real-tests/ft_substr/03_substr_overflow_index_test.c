/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_substr_overflow_index_test.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:24:42 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 21:39:53 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_substr_test.h"

int	ft_substr_overflow_index_test(void)
{
	char	*str;
	char	*res;

	str = "Hello World";
	res = ft_substr(str, 13231, 5);
	if (res == NULL)
		return (KO);
	if (ft_strncmp(res, "", 1) == 0)
		return (free(res), OK);
	return (free(res), KO);
}
