/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_substr_null_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:22:24 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 21:38:52 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_substr_test.h"

int	ft_substr_null_test(void)
{
	char	*res;

	res = ft_substr(NULL, 6, 0);
	if (res == NULL)
		return (OK);
	return (KO);
}
