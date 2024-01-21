/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:29:47 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 18:14:01 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libunit.h"
#include "real-tests/ft_isint/ft_isint_test.h"
#include "real-tests/ft_atoi/ft_atoi_test.h"
#include "src/libft/libft.h"

int main(void)
{
    t_passed   res;

    res.passed = 0;
    res.total = 0;
    ft_isint_launcher(&res);
    ft_atoi_launcher(&res);
    return (0);
}