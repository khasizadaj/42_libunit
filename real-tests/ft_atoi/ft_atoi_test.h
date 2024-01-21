/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:39:51 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 22:32:54 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_TEST_H
# define FT_ATOI_TEST_H

# include "../../framework/include/libunit.h"

void	ft_atoi_launcher(t_passed *statuses);
int		ft_atoi_test_empty_string(void);
int		ft_atoi_test_null_input(void);
int		ft_atoi_test_number_with_letter(void);
int		ft_atoi_test_number_with_only_letters(void);
int		ft_atoi_test_number_with_zeros(void);

#endif