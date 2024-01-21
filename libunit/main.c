/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:29:47 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 20:18:26 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libunit.h"
#include "real-tests/ft_isint/ft_isint_test.h"
#include "real-tests/ft_atoi/ft_atoi_test.h"
#include "real-tests/ft_itoa/ft_itoa_test.h"

int main(void)
{
    t_passed   res;

    res.passed = 0;
    res.total = 0;
    ft_isint_launcher(&res);
    ft_atoi_launcher(&res);
    ft_itoa_launcher(&res);
    if (res.total == 0)
        return (ft_printf("No tests were launched\n"), 0);
    ft_printf("\n%d/%d tests checked\n", res.passed, res.total);
    return (0);
}