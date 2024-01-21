/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 19:13:59 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa_test.h"

void	ft_itoa_launcher(t_passed *statuses)
{
  t_routine *routine;

	routine = NULL;
	testlist_load(&routine, "ft_itoa",
		"Handle zero.", &ft_itoa_handle_zero_test);
	testlist_load(&routine, "ft_itoa",
		"Handle MAX_INT.", &ft_itoa_handle_max_int_test);
	testlist_load(&routine, "ft_itoa",
		"Handle MIN_INT.", &ft_itoa_handle_min_int_test);
	testlist_run(&routine, statuses);
	testlist_clear(&routine);
}
