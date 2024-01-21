/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_test_number_with_only_letters.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:04:08 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 16:53:44 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_atoi_test.h"

int	ft_atoi_test_number_with_only_letters(void)
{
	char	*str;

	str = "abc";
	if (ft_atoi(str) == 0)
		return (0);
	else
		return (-1);
}
