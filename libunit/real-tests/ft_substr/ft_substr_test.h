/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:12:37 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 21:21:51 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUBSTR_TEST_H
# define FT_SUBSTR_TEST_H

# include "../../include/libunit.h"

void	ft_substr_launcher(t_passed *statuses);
int		ft_substr_valid_test(void);
int		ft_substr_null_test(void);
int		ft_substr_overflow_index_test(void);
int		ft_substr_overflow_len_test(void);
int		ft_substr_empty_string_test(void);

#endif
