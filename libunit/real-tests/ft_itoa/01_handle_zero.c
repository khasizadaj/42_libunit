/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_handle_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:44:40 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 20:55:18 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa_test.h"

int	ft_itoa_handle_zero_test(void)
{
	char	*str;

	str = ft_itoa(0);
	if (str == NULL)
		return (KO);
	if (!ft_strncmp(str, "0", 1))
		return (free(str), OK);
	return (free(str), KO);
}
