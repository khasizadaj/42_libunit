/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/20 23:02:50 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isint_test.h"

void    ft_isint_launcher(void)
{
    t_testlist *new;
    t_testlist *testlist;
    char        *name;

    testlist = NULL;
    ft_printf("[FT_ISINT]\n");
    name = ft_strdup("All chars are digits.");
    new = testlist_new(name, &test_all_chars_are_digits);
    if (!new)
        printf("Failed to create new testlist node\n");

    name = ft_strdup("One character is letter.");
    testlist_add_back(&testlist, new);
    new = testlist_new(name, &test_one_char_are_letter);
    if (!new)
        printf("Failed to create new testlist node\n");
    testlist_add_back(&testlist, new);
    testlist_run(&testlist);
    testlist_clear(&testlist);
}