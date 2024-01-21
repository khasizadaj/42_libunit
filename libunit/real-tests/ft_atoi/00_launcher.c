/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 15:16:09 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_atoi_test.h"

void	ft_atoi_launcher(void)
{
    t_routine *routine;

	routine = NULL;
	testlist_load(&routine, "ft_atoi",
		"Input is null.", &ft_atoi_test_empty_string);
	testlist_run(&routine);
	testlist_clear(&routine);
}
