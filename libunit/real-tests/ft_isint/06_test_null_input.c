/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_test_null_input.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:49:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 14:13:35 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_isint_test.h"

int	test_null_input(void)
{
	char	*str;

	str = NULL;
	if (ft_isint(str) == FALSE)
		return (0);
	else
		return (-1);
}
