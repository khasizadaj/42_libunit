/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:19:43 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 17:30:42 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa_test.h"

void	ft_isint_launcher(void)
{
	t_routine	*routine;

	routine = NULL;
	testlist_run(&routine);
	testlist_clear(&routine);
}
