/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_test_input_with_no_digit.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:04:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 16:45:14 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_atoi_test.h"

int	ft_atoi_test_number_with_letter(void)
{
	char	*str;

	str = "123abc";
	if (ft_atoi(str) == 123)
		return (0);
	else
		return (-1);
}
