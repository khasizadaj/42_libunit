/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_test_null_input.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:49:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 21:51:26 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_isint_test.h"

int	test_null_input(void)
{
	char	*str;

	str = NULL;
	if (ft_isint(str) == FALSE)
		return (OK);
	else
		return (KO);
}
