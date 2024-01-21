/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_substr_overflow_len_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:28:15 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 21:42:10 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_substr_test.h"

int	ft_substr_overflow_len_test(void)
{
	char	*str;
	char	*res;

	str = "Hello World";
	res = ft_substr(str, 6, 13231);
	if (res == NULL)
		return (KO);
	if (ft_strncmp(res, "Make KO please", 5) == 0)
		return (free(res), OK);
	return (free(res), KO);
}
