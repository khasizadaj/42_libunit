/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_test_one_char_are_letter.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:23:09 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/20 22:57:51 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isint_test.h"

int test_one_char_are_letter(void)
{
    char *str = "123456a7890";

    if (ft_isint(str) != TRUE)
        return (0);
    else
        return (-1);
}