/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:28:32 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 19:45:08 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dummy_test.h"

void	dummy_launcher(t_passed *statuses)
{
	t_routine	*testlist;

	testlist = NULL;
	testlist_load(&testlist, "OK test", "OK status test", &ok_test);
	testlist_load(&testlist, "KO test", "KO status test", &ko_test);
	testlist_load(&testlist, "SIGV test", "SEGV status test", &segv_test);
	testlist_load(&testlist, "BUSE test", "BUSE status test", &buse_test);
	testlist_run(&testlist, statuses);
	testlist_clear(&testlist);
}