/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_null_input.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:04:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 14:18:47 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_atoi_test.h"

int	ft_atoi_test_empty_string(void)
{
	char	*str;

	str = "";
	if (ft_atoi(str) == 0)
		return (0);
	else
		return (-1);
}
