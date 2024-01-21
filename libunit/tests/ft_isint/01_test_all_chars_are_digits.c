/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_all_chars_are_digits.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:23:09 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/20 22:56:53 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isint_test.h"

int test_all_chars_are_digits(void)
{
    char *str = "1234567890";

    if (ft_isint(str))
        return (0);
    else
        return (-1);
}