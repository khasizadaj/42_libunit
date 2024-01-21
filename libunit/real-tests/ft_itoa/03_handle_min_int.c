/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_handle_min_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:44:40 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 19:13:10 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa_test.h"

int   ft_itoa_handle_min_int_test(void)
{
  char *str;

  str = ft_itoa(-2147483648);
  if (ft_strncmp(str, "-2147483648", 11) != 0)
    return (-1);
  return (0);
}