/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dummy_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:30:15 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 22:20:01 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_TEST_H
# define DUMMY_TEST_H

# include "../../framework/include/libunit.h"
# include "../../libft/libft.h"

void	dummy_launcher(t_passed *statuses);
int		ok_test(void);
int		ko_test(void);
int		segv_test(void);
int		buse_test(void);

#endif // DUMMY_TEST_H
