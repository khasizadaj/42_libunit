/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:39:51 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 19:17:36 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_TEST_H
# define FT_ATOI_TEST_H

# include "../../include/libunit.h"

void	ft_atoi_launcher(t_passed *statuses);
int		ft_atoi_test_empty_string(void);
int		ft_atoi_test_null_input(void);
int		ft_atoi_test_number_with_letter(void);
int		ft_atoi_test_number_with_only_letters(void);
int		ft_atoi_test_number_with_zeros(void);

#endif