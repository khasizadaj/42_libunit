/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_substr_empty_string_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:29:03 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 21:40:57 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_substr_test.h"

int	ft_substr_empty_string_test(void)
{
	char	*str;
	char	*res;

	str = "";
	res = ft_substr(str, 6, 0);
	if (res == NULL)
		return (KO);
	if (*res == 0)
		return (free(res), OK);
	return (free(res), KO);
}
