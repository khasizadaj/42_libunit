/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:29:47 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 22:42:08 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/include/libunit.h"
#include "ft_isint/ft_isint_test.h"
#include "ft_atoi/ft_atoi_test.h"
#include "ft_itoa/ft_itoa_test.h"
#include "ft_substr/ft_substr_test.h"

int	main(void)
{
	t_passed	res;

	res.passed = 0;
	res.total = 0;
	ft_isint_launcher(&res);
	ft_atoi_launcher(&res);
	ft_itoa_launcher(&res);
	ft_substr_launcher(&res);
	if (res.total == 0)
		return (ft_printf("No tests were launched\n"), 0);
	ft_printf("\n%d/%d tests checked\n", res.passed, res.total);
	if (res.passed == res.total)
		return (OK);
	return (KO);
}
