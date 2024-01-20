/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/20 23:13:37 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isint_test.h"

void    ft_isint_launcher(void)
{
    t_testlist *new;
    t_testlist *testlist;

    new = testlist_new("Basic test", &ft_isint_basic_test);
    if (!new)
        printf("Failed to create new testlist node\n");a
    testlist = NULL;
    testlist_add_back(testlist, new);
}