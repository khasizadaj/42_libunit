/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_test_empty_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:49:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 14:12:07 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_isint_test.h"

int	test_empty_string(void)
{
	char	*str;

	str = "";
	if (ft_isint(str) == FALSE)
		return (0);
	else
		return (-1);
}
