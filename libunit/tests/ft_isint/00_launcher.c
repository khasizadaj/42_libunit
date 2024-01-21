/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 13:25:12 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_isint_test.h"

/*
    main -> launcher

        creates routine -> name = "ft_strlen", testlist
            load tests
            run tests

*/

void    ft_isint_launcher(void)
{
    t_routine *routine;
    char        *name;

    routine = NULL;
    testlist_load(&routine, "ft_isint", "All chars are digits.", &test_all_chars_are_digits);
    testlist_load(&routine, "ft_isint", "One character is letter.", &test_one_char_are_letter);
    testlist_run(&routine);
    testlist_clear(&routine);
}