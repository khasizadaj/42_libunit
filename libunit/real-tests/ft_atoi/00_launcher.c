/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 19:19:24 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi_test.h"

void	ft_atoi_launcher(t_passed *statuses)
{
	t_routine *routine;

	routine = NULL;
	testlist_load(&routine, "ft_atoi",
		"Input is empty.", &ft_atoi_test_empty_string);
	// testlist_load(&routine, "ft_atoi",
	// 	"Input is empty.", &ft_atoi_test_null_input);
	testlist_load(&routine, "ft_atoi",
		"Conversion stops at first letter.", &ft_atoi_test_number_with_letter);
	testlist_load(&routine, "ft_atoi",
		"Conversion returns 0 input has only letters.", &ft_atoi_test_number_with_only_letters);
	testlist_load(&routine, "ft_atoi",
		"Number with zero in the beginning", &ft_atoi_test_number_with_zeros);
	testlist_run(&routine, statuses);
	testlist_clear(&routine);
}
