/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_test_one_char_is_letter.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:23:09 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 14:13:48 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_isint_test.h"

int	test_one_char_is_letter(void)
{
	char	*str;

	str = "123456a7890";
	if (ft_isint(str) == FALSE)
		return (0);
	else
		return (-1);
}
