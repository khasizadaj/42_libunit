/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:39:51 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 19:13:31 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITOA_TEST_H
# define FT_ITOA_TEST_H

# include "../../include/libunit.h"

void	ft_itoa_launcher(t_passed *statuses);
int   	ft_itoa_handle_zero_test(void);
int		ft_itoa_handle_max_int_test(void);
int		ft_itoa_handle_min_int_test(void);

#endif