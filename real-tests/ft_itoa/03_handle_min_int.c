/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_handle_min_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:44:40 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 20:54:44 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa_test.h"

int	ft_itoa_handle_min_int_test(void)
{
	char	*str;

	str = ft_itoa(-2147483648);
	if (str == NULL)
		return (KO);
	if (ft_strncmp(str, "-2147483648", 11))
		return (free(str), KO);
	return (free(str), OK);
}
