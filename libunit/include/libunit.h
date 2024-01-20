/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:24:18 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/20 22:54:40 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"

# include "stdio.h"
# include "stdlib.h"

typedef struct	s_testlist
{
    char				*name;
    int					(*func)(void);
    struct s_testlist	*next;
}				t_testlist;

int         load_test(t_testlist *testlist, char *name, int (*func)(void));
int	        launch_tests(t_testlist *testlist);
t_testlist  *testlist_new(char *name, int (*func)(void));
void        testlist_add_back(t_testlist **list, t_testlist *new_elem);
void        testlist_clear(t_testlist **list);
void        testlist_run(t_testlist **list);

#endif