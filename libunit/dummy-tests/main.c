/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:29:47 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 20:47:06 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dummy_test.h"

int	main(void)
{
	t_passed	res;

	res.passed = 0;
	res.total = 0;
	dummy_launcher(&res);
	ft_printf("\n%d/%d tests checked\n", res.passed, res.total);
	return (0);
}
