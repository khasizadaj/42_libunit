/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 18:15:29 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi_test.h"

void	ft_atoi_launcher(t_passed *statuses)
{
  t_routine *routine;

	routine = NULL;
	testlist_load(&routine, "ft_atoi",
		"Input is empty.", &ft_atoi_test_empty_string);
	testlist_run(&routine, statuses);
	testlist_clear(&routine);
}
