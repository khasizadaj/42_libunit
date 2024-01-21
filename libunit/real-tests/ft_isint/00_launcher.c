/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 17:35:47 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isint_test.h"

void	ft_isint_launcher(t_passed *statuses)
{
	t_routine	*routine;

	routine = NULL;
	testlist_load(&routine, "ft_isint",
		"All chars are digits.", &test_all_chars_are_digits);
	testlist_load(&routine, "ft_isint",
		"One character is letter.", &test_one_char_is_letter);
	testlist_load(&routine, "ft_isint",
		"One character is symbol.", &test_one_char_is_symbol);
	testlist_load(&routine, "ft_isint",
		"One non printable characters.", &test_non_printable_chars);
	testlist_load(&routine, "ft_isint",
		"String is empty.", &test_empty_string);
	testlist_load(&routine, "ft_isint",
		"Input is null.", &test_null_input);
	testlist_run(&routine, statuses);
	testlist_clear(&routine);
}
