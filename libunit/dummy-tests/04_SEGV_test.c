/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_SEGV_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:31:45 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 20:13:23 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dummy_test.h"

int		segv_test(void)
{
	char	*str;

	str = NULL;
	str[42] = 42;
	return (0);
}
