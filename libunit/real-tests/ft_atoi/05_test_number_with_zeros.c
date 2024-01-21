/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_test_number_with_zeros.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:04:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 19:21:32 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_atoi_test.h"

int	ft_atoi_test_number_with_zeros(void)
{
	char	*str;

	str = "0000005";
	if (ft_atoi(str) == 5)
		return (0);
	else
		return (-1);
}
