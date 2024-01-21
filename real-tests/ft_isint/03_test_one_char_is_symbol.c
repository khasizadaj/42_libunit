/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_test_one_char_is_symbol.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:49:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 14:14:15 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_isint_test.h"

int	test_one_char_is_symbol(void)
{
	char	*str;

	str = "1234567890-";
	if (ft_isint(str) == FALSE)
		return (0);
	else
		return (-1);
}
