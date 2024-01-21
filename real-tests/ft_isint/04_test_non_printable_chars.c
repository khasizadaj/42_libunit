/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_test_non_printable_chars.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:49:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 14:14:07 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_isint_test.h"

int	test_non_printable_chars(void)
{
	char	*str;

	str = "123\n";
	if (ft_isint(str) == FALSE)
		return (0);
	else
		return (-1);
}
