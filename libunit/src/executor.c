/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:27:49 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 18:13:19 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"

void	testlist_run(t_routine **list, t_passed *res)
{
	t_routine	*iter;

	if (list == NULL || *list == NULL)
		return ;
	iter = *list;
	while (iter)
	{
		if (iter->func() == 0) {
			ft_printf("[%s]:[%s]:[OK]\n", iter->test_function, iter->test_name);
			res->passed++;
		}
		else
			ft_printf("[%s]:[%s]:[KO]\n", iter->test_function, iter->test_name);
		iter = iter->next;
		res->total++;
	}
}