/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint_test.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:39:51 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 22:32:47 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ISINT_TEST_H
# define FT_ISINT_TEST_H

# include "../../framework/include/libunit.h"

void	ft_isint_launcher(t_passed *statuses);
int		test_all_chars_are_digits(void);
int		test_one_char_is_letter(void);
int		test_one_char_is_symbol(void);
int		test_non_printable_chars(void);
int		test_empty_string(void);
int		test_null_input(void);

#endif