/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:24:18 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 18:11:27 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "../src/libft/libft.h"

# include "stdio.h"
# include "stdlib.h"

typedef struct	s_routine
{
    char				*test_function;
    char				*test_name;
    int					(*func)(void);
    struct s_routine	*next;
}				t_routine;

typedef enum	s_statuses
{
    OK = 0,
    KO = -1,
    SEGV = -2,
    BUSE = -3
}				t_statuses;

typedef struct	s_passed
{
    int passed;
    int total;
}				t_passed;

int         load_test(t_routine *testlist, char *name, int (*func)(void));
int	        launch_tests(t_routine *testlist);
t_routine	*testlist_new(char *test_function, char *test_name, int (*func)(void));
void        testlist_add_back(t_routine **list, t_routine *new_elem);
void	    testlist_load(t_routine **list, char *test_function,
    char *test_name, int (*func)(void));
void        testlist_clear(t_routine **list);
void        testlist_run(t_routine **list, t_passed *statuses);

#endif