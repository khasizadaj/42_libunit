/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:12:19 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 21:33:35 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_substr_test.h"

void	ft_substr_launcher(t_passed *statuses)
{
	t_routine	*routine;

	routine = NULL;
	testlist_load(&routine, "ft_substr",
		"NULL test", &ft_substr_null_test);
	testlist_load(&routine, "ft_substr",
		"Valid test", &ft_substr_valid_test);
	testlist_load(&routine, "ft_substr",
		"Overflow index test", &ft_substr_overflow_index_test);
	testlist_load(&routine, "ft_substr",
		"Overflow len test", &ft_substr_overflow_len_test);
	testlist_load(&routine, "ft_substr",
		"Empty string test", &ft_substr_empty_string_test);
	testlist_run(&routine, statuses);
	testlist_clear(&routine);
}
